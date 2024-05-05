#include <bits/stdc++.h>
using namespace std;

#define sz(x) (int)size(x)

using ll = long long;
using vl = vector<ll>;

void file_i_o() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

int main() {
    file_i_o();
    ll N, Q;
    cin >> N >> Q;
    vl a(N);
    for (ll &x : a) cin >> x;

    // Compute prefix sum array
    vl prefix(N + 1, 0);
    for (int i = 0; i < N; ++i) {
        prefix[i + 1] = prefix[i] + a[i];
    }

    // Handle queries
    for (ll i = 0; i < Q; ++i) {
        ll l, r;
        cin >> l >> r;
        --l;
        cout << prefix[r] - prefix[l] << "\n";
    }

    return 0;
}

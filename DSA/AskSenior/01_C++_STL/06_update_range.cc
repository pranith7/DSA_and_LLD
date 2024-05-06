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
	int N, Q;
	cin >> N >> Q;
	vl a(N);
	for (ll &x : a) cin >> x;
	for (int i = 0; i < Q; ++i) {
		int l, r, val;
		cin >> l >> r >> val;
        ll sum = 0;
        --l,--r;
        for (int i = l; i <= r; ++i) a[i] += val;
	}
    for(auto x:a) cout << x << " ";
    return 0;
}
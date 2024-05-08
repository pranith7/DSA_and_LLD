#include<bits/stdc++.h>
using namespace std;


bool can_cut(vector<int>& ropes, int k, double length) {
    /*  check function:-
            We need to maximise the value 'X' which is going to cut n
            ropes and make sure we are getting >= k pieces from n ropes. 
    */
    int count = 0;
    for (int rope : ropes) {
        count += rope / length;
    }
    return count >= k;
}

void file_i_o()
{
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
    int n, k;
    cin >> n >> k;
    vector<int> ropes(n);
    for (int i = 0; i < n; i++) {
        cin >> ropes[i];
    }

    double low = 0, high = 1e7;
    for (int i = 0; i < 100; i++) {
        double mid = (low + high) / 2;
        if (can_cut(ropes, k, mid)) {
            low = mid;
        } else {
            high = mid;
        }
    }

    cout << fixed << setprecision(6) << low << endl;
    return 0;
}

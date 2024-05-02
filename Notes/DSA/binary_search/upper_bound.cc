#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define all(v) v.begin(), v.end()

bool check(int mid,vector<int> &V, int target){
    return V[mid] > target;
}

void solve(){
    int n, target;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    int lo = 0, hi = n-1, ans = n;
    while(lo<=hi){
        int mid = lo + (hi - lo)/2;
        if(check(mid,v,target)){
            ans = mid;
            lo = mid + 1;
        }else{
            hi = mid - 1;
        }
    }
    cout << ans << endl; 
}


int main(int argc, char const *argv[]) {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    while(tc--){
        solve();
    }

    return 0;
}
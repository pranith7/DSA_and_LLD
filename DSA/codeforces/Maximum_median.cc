#include <bits/stdc++.h>
using namespace std;

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

bool check(vl &arr, ll mid, ll k){
    ll n = arr.size();
    ll count = 0;
    for(ll i=n/2;i<n;i++){
        if(arr[i] <= mid){
            count += (mid - arr[i]);
        }
    }
    return count <= k;
}

int main(){
    file_i_o();
    ll n,k;
    cin >> n >> k;
    vl arr(n);
    for(ll i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end());

    ll lo = 1, hi = 2e9, ans = -1;
    while(lo<=hi){
        ll mid = lo + (hi-lo)/2;
        if(check(arr,mid,k)){
            ans = mid;
            lo = mid + 1;
        }else{
            hi = mid - 1;
        }
    }
    cout << ans << "\n";

    return 0;
}
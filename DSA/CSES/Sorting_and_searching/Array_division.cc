#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vl = vector<ll>;

bool check(vl &arr, ll mid, ll k){
    int count = 1;
    int sum  = 0;
    for(int i=0;i<arr.size();i++){

        if(arr[i] > mid) return false; // intital check 
        
        if(sum + arr[i] <= mid){
            sum += arr[i];
        }else{
            count++;
            sum = arr[i];
        }
    }
    return count <= k;
}

void file_i_o() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

int main(){
    // file_i_o();
    ll n,k;
    cin >> n >> k;
    vl arr(n);
    for(ll i=0;i<n;i++){
        cin >> arr[i];
    }

    ll lo = 1, hi = 1e15,ans = -1;
    while(lo<=hi){
        ll mid = lo + (hi-lo)/2;
        if(check(arr,mid,k)){
            ans = mid;
            hi = mid - 1;
        }else{
            lo = mid + 1;
        }
    }
    cout << ans << "\n";

    return 0;
}
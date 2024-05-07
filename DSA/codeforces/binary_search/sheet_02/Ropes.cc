#include<bits/stdc++.h>
using namespace std;


#define ll 				long long int
#define ld				long double
#define endl            "\n"
#define all(x)          x.begin(), x.end()
#define sortall(x)      sort(all(x))
#define mid(l,r)        (l+(r-l)/2)

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


bool can_cut(ll mi, vector<ll> &rope, ll k){
    /*  check function:-
            We need to maximise the value 'X' which is going to cut n
            ropes and make sure we are getting >= k pieces from n ropes. 
    */

    ll x = 0;
    for(ll i=0; i<rope.size(); i++){
        x += rope[i]/mi;
    }
    return x >= k;
}

int main(int argc, char const *argv[]) {
    file_i_o();
    ll n, k;
    cin >> n >> k;
    vector<ll> rope(n);

    for(int i=0;i<n;i++){
        cin >> rope[i];
    }
    ll lo = 1, hi = 1e9, ans = -1;
    while(lo <= hi){
        ll mi;
        mi = mid(lo,hi);
        if(can_cut(mi,rope,k)){
            ans = mi;
            lo = mi + 1;
        }else{
            hi = mi - 1;
        }
    }
    cout<< ans << endl;

    return 0;
}
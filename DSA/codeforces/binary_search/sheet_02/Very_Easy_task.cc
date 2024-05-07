#include<bits/stdc++.h>
using namespace std;

#define ll 				long long int
#define ld				long double
#define endl   "\n"
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
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
bool check(ll mid, ll n, ll x, ll y){
    /*
        check function:
            Whether we are able to print n copies within given
            mid time provided 2 copiers which takes x sec & y sec
            time to make one copy.
    */
   int count = 0;

   return count <= mid;
}

int main(int argc, char const *argv[]) {
    file_i_o();
    ll n, x, y;
    cin >> n >> x >> y;
    ll lo = 1, hi = 1e9, ans = -1;

    while(lo <= hi){
        ll mid = lo + (hi - lo)/2;
        if(check(mid,n,x,y)){
            ans = mid;
            hi = mid - 1;
        }else{
            lo = mid + 1;
        }
    }
    cout<< ans << endl;
    return 0;
}
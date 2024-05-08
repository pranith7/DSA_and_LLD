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
/*
int n, x, y, tt = 0, copies = 0;
        cin>>n>>x>>y;
        if(x < y)
        {
            tt += x;
        }
        else
        {
            tt += y;
        }
        copies = 1;
        int low = 0, high = 2e9, ans, mid;
        while(low <= high)
        {
            mid = low + (high-low)/2;
            int T = mid;
            int d1 = (T)/x, d2 = (T)/y;
            int tot = copies + d1 + d2;
            // deb(mid);deb(tot);
            if(tot >= n)
            {
                ans = T;
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }
        cout<<tt+ans<<"\n";
*/
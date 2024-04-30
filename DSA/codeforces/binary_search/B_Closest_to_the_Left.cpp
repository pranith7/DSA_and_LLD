#include<bits/stdc++.h>
using namespace std;
#define ll 				long long int
#define ld				long double
#define mod             1000000007
#define inf             1e18
#define si(x)	        scanf("%d",&x)
#define sl(x)	        scanf("%lld",&x)
#define ss(s)	        scanf("%s",s)
#define pi(x)	        printf("%d\n",x)
#define pl(x)	        printf("%lld\n",x)
#define ps(s)	        printf("%s\n",s)
#define endl			"\n"
#define pb 				emplace_back
#define vi              vector<ll>
#define vs				vector<string>
#define pii             pair<ll,ll>
#define ump				unordered_map
#define mp 				map
#define pq_max          priority_queue<ll>
#define pq_min          priority_queue<ll,vi,greater<ll> >
#define ff 				first
#define ss 				second
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define mid(l,r)        (l+(r-l)/2)
#define loop(i,a,b) 	for(int i=(a);i<=(b);i++)
#define looprev(i,a,b) 	for(int i=(a);i>=(b);i--)
#define log(args...) 	{ string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
#define logarr(arr,a,b)	for(int z=(a);z<=(b);z++) cout<<(arr[z])<<" ";cout<<endl;	
#define token(str,ch)	(std::istringstream var((str)); vs v; string t; while(getline((var), t, (ch))) {v.pb(t);} return v;)
vs tokenizer(string str,char ch) {std::istringstream var((str)); vs v; string t; while(getline((var), t, (ch))) {v.pb(t);} return v;}

// Overload for deb when no arguments are provided
void deb() {}
#define deb(...) logger(#__VA_ARGS__, __VA_ARGS__)
template<typename ...Args>
void logger(string vars, Args&&... values) {
    cout << vars;
    if(vars != "") cout << " = ";
    string delim = "";
    (..., (cout << delim << values, delim = ", "));
    cout << endl;
}

void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
    cout << *it << " = " << a << endl;
    err(++it, args...);
}
//typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> pbds;

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

void check(int L,int R, int target,vector<int> &array){
    int mid;
    int ans = 0;
    while(L <= R){
        mid = L + (R - L)/2;
        if(array[mid] <= target){
            L = mid + 1;
            ans = mid + 1;
        }else{
            R = mid - 1;
        }
    }
    cout << ans << endl;
}


int main(int argc, char const *argv[]){
    // file_i_o();
    int n,k;
    cin >> n >> k;
    vector<int> array(n);
    for(int i=0;i<n;i++){
        cin >> array[i];
    }
    for(int i=0;i<k;i++){
        int x;
        cin >> x;
        int l = 0, r = n-1;
        check(l,r,x,array);
    }
    return 0;
}
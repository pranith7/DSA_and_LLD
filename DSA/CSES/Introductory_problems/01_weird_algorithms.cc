/*
 
Consider an algorithm that takes as input a positive integer n. If n is even, the algorithm divides it by two,
and if n is odd, the algorithm multiplies it by three and adds one. The algorithm repeats this, until n is one.
For example, the sequence for n=3 is as follows:
 
Input
The only input line contains an integer n.
Output
Print a line that contains all values of n during the algorithm.
Constraints
 
1 \le n \le 10^6
 
Example
Input:
3
 
Output:
3 10 5 16 8 4 2 1
 
*/
 
#include<bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
using namespace std;
#define ll 				long long int
#define ld				long double
#define mod             1000000007
#define inf             1e18
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
#define mid(l,r)        (l+(r-l)/2)
#define loop(i,a,b) 	for(int i=(a);i<=(b);i++)
#define looprev(i,a,b) 	for(int i=(a);i>=(b);i--)
#define log(args...) 	{ string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
#define logarr(arr,a,b)	for(int z=(a);z<=(b);z++) cout<<(arr[z])<<" ";cout<<endl;	
#define token(str,ch)	(std::istringstream var((str)); vs v; string t; while(getline((var), t, (ch))) {v.pb(t);} return v;)
vs tokenizer(string str,char ch) {std::istringstream var((str)); vs v; string t; while(getline((var), t, (ch))) {v.pb(t);} return v;}
 
 
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
 
int main(int argc, char const *argv[]) {
    //file_i_o();
 
    ll n;
    cin >> n;
    vi res;
    res.push_back(n);
    while(n >= 1){
        
        if(n == 1){
            // res.push_back(n);
            break;
        }else if(n%2 == 0){
            n = n >> 1;
            res.push_back(n);
        }else{
            n = 3*n + 1;
            res.push_back(n);
        }
 
    }
    logarr(res,0,res.size()-1)
 
    return 0;
}
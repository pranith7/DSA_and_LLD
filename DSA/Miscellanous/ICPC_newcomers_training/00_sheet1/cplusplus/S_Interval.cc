#include<bits/stdc++.h>
using namespace std;
using namespace std::chrono;


#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++) 
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1) 
#define ll long long
#define cn cout<<"\n";
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define PI 3.1415926535897932384626
typedef pair<int, int>	pii;
typedef vector<int>		vi;
typedef vector<pii>		vpii;
typedef vector<vi>		vvi;
//=======================
const int MOD = 1'000'000'007;
const int N = 2e6+13, M = N;
//=======================
vi g[N];
int a[N];
// int n, m, k;
// string first_name, second_name;
//=======================


void solve(istream& cin,ostream& cout) {
    
    float X;
    cin >> X;

    if (X > 100.00 or X < 0){
        cout <<"Out of Intervals"<<endl;
    }
    else if(X > 75.00){
        cout <<"Interval (75,100]"<<endl;
    }
    else if(X > 50.00){
        cout <<"Interval (50,75]"<<endl;
    }
    else if(X > 25.00){
        cout <<"Interval (25,50]"<<endl;
    }
    else{
        cout <<"Interval [0,25]"<<endl;
    }



    return;
}


int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    ifstream fin("input.txt");
    ofstream fout("output.txt");

    int t;
    fin >> t; // read number of test cases
    while (t--) {
        solve(fin, fout); 
    }

    fin.close();
    fout.close();

    // solve();

    return 0;
}
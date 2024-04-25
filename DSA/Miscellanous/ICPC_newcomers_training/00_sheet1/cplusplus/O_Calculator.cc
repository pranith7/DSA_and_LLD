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
int n, m, k;
string first_name, second_name;
//=======================


void solve(istream& cin,ostream& cout) {

    int A, B;
    char S;
    cin >> A >> S >> B;
  
    int result;
  
    if (S == '+') {
        result = A + B;
    } else if (S == '-') {
        result = A - B;
    } else if (S == '*') {
        result = A * B;
    } else if (S == '/') {
        result = A / B;
    } else {
        cout << "Invalid operator" << endl;
        return;
    }
  
    cout << result << endl;
    // return 0;
}


int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    ifstream fin("inputs.txt");
    ofstream fout("outputs.txt");

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
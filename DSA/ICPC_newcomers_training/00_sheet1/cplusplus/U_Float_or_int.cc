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
// string first_name, second_name;
//=======================


void solve(istream& cin,ostream& cout) {
    
    string input;
    cin >> input;


    // Check if the input contains a decimal point
    size_t pos = input.find('.');
    if (pos == string::npos) {
        // If no decimal point, input is an integer
        cout << "int " << input << endl;
    } else {
        // If decimal point exists, input is a float
        string intPart = input.substr(0, pos);
        string decimalPart = input.substr(pos + 1);

        // Remove trailing zeros from the decimal part
        while (!decimalPart.empty() && decimalPart.back() == '0') {
            decimalPart.pop_back();
        }

        if (decimalPart.empty()) {
            // If decimal part becomes empty, treat as integer
            cout << "int " << intPart << endl;
        } else {
            cout << "float " << intPart << " 0." << decimalPart << endl;
        }
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
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
long long int a, b, k;
// string first_name, second_name;
//=======================


// int multiply(a, b) {
    
//     //Numbers to be multiplied
//     // long a=111,b=100;

//     //Convert them to strings (or character array)
//     string arr1 = to_string(a), arr2 = to_string(b); 

//     //Reverse them
//     reverse(arr1.begin(), arr1.end());
//     reverse(arr2.begin(), arr2.end());

//     //Getting size for final result, just to avoid dynamic size
//     int ans_size = arr1.size() + arr2.size();

//     //Declaring array to store final result
//     int ans[ans_size]={0};

//     //Multiplying 
//     //In a reverse manner, just to avoid reversing strings explicitly 
//     for(int i=0; i<arr1.size();i++)
//     {
//         for(int j=0; j<arr2.size();j++)
//         {
//             //Convert array elements (char -> int)
//             int p = (int)(arr1[i]) - '0';
//             int q = (int)(arr2[j]) - '0';

//             //Excerpt from Shravan's answer above
//             ans[i+j]+=p*q;
//             ans[i+j+1]=ans[i+j+1]+ans[i+j]/10;
//             ans[i+j]%=10;
//         }
//     }

//     //Declare array to store string form of final answer
//     string s="";

//     for(auto i=0;i<ans_size; ++i)
//         s += to_string(ans[i]); 

//     reverse(s.begin(), s.end() );

//     //If last element is 0, it should be skipped
//     if(s[0] =='0')
//     {
//     string ss(s,1,s.size()-1);
//     s=ss;
//     }

//     //Final answer
//     // cout<< s;

//     return s;
// }

void solve(istream& cin,ostream& cout) {

    cin >> a >> b;
    string arr1 = to_string(a), arr2 = to_string(b); 

    //Reverse them
    reverse(arr1.begin(), arr1.end());
    reverse(arr2.begin(), arr2.end());

    //Getting size for final result, just to avoid dynamic size
    int ans_size = arr1.size() + arr2.size();

    //Declaring array to store final result
    int ans[ans_size]={0};

    //Multiplying 
    //In a reverse manner, just to avoid reversing strings explicitly 
    for(int i=0; i<arr1.size();i++)
    {
        for(int j=0; j<arr2.size();j++)
        {
            //Convert array elements (char -> int)
            int p = (int)(arr1[i]) - '0';
            int q = (int)(arr2[j]) - '0';

            //Excerpt from Shravan's answer above
            ans[i+j]+=p*q;
            ans[i+j+1]=ans[i+j+1]+ans[i+j]/10;
            ans[i+j]%=10;
        }
    }

    //Declare array to store string form of final answer
    string s="";

    for(auto i=0;i<ans_size; ++i)
        s += to_string(ans[i]); 

    reverse(s.begin(), s.end() );

    //If last element is 0, it should be skipped
    if(s[0] =='0')
    {
    string ss(s,1,s.size()-1);
    s=ss;
    }

    //Final answer
    cout<< s;

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
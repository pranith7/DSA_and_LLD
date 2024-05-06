#include <bits/stdc++.h>
using namespace std;

// #define int long long int;
#define endl "\n";
#define mod 1000000007;
#define inf 1000000000000000000;
#define pb push_back;
#define mp make_pair;
#define ff first;

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

int main() {
    file_i_o();

    int n, q;
    cin >> n >> q;
    unordered_map<int,int> map;

    for(int i=1;i<=q;i++){
        int x, query;
        cin >> x >> query;
        // cout << arr_element << query <<endl;
        if(x == 1){
            map[query]++;
        }else{
            cout << map[query] << endl;
        }
    }
    return 0;
}


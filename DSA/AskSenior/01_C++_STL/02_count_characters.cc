#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define mod 1000000007
#define inf 1000000000000000000
#define pb push_back
#define mp make_pair
#define ff first

void file_i_o() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

bool compare(const pair<string, int>& a, const pair<string, int>& b) {
    return a.first < b.first; // Sort in ascending order of strings
}

int main() {
    file_i_o();

    string s;
    cin >> s;
    unordered_map<string, int> map;
    for(int i = 0; i < s.length(); i++) {
        map[s.substr(i, 1)]++;
    }
   
    vector<pair<string, int>> sorted_map(map.begin(), map.end());

    sort(sorted_map.begin(), sorted_map.end(), compare);     // Sort the vector using custom comparator

    for(auto it = sorted_map.begin(); it != sorted_map.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}

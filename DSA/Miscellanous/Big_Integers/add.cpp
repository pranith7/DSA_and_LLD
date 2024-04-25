#include<bits/stdc++.h>
using namespace std;
using namespace std::chrono;

vector<int> add(vector<int> &arr1,vector<int> &arr2,vector<int> &result){
    int n,carry,sum;
    
    reverse(arr1.begin(),arr1.end());
    reverse(arr2.begin(),arr2.end());

    n = min(arr1.size(),arr2.size());
    carry = 0;

    for(int i=0;i<n;i++){
        sum = arr1[i] + arr2[i] + carry;
        result.push_back(sum%10);
        carry = sum/10;
    }
    if(arr1.size() > n){
        for(int i=n;i<arr1.size();i++){
            sum = arr1[i] + carry;
            result.push_back(sum%10);
            carry = sum/10;
        }
    }
    if(arr2.size() > n){
        for(int i=n;i<arr2.size();i++){
            sum = arr2[i] + carry;
            result.push_back(sum%10);
            carry = sum/10;
        }
    }
    if(carry){
        result.push_back(carry);
    }
    reverse(result.begin(),result.end());
    return result;
}

void solve(istream& cin,ostream& cout) {
    string N,M;
    cin >> N,M;
    vector<int> arr1, arr2, result;
    for(int i=0;i<s.length();i++){
        arr1.push_back(s[i-'0']);
    }
    for(int i=0;i<s.length();i++){
        arr2.push_back(s[i-'0']);
    }
    
    add(arr1,arr2,result);
    for(inti=0;i<result.size();i++){
        cout << result[i];
    }

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
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

void solve(vector<int> &array,int l,int r){
    int n = array.size();
    int count = 0;
    for(int i=0;i<n;i++){
        if(array[i] >= l and array[i] <= r){
            count++;
        }
    }
    cout << count <<" ";
}

int main(){
    int n,k,l,r;
    cin >> n;
    vector<int> array(n);
    for(int i=0;i<n;i++){
        cin >> array[i];
    }
    cin >> k;
    for(int i=1;i<=k;i++){
        cin >> l >> r;
        solve(array,l,r);
    }
    return 0;
}
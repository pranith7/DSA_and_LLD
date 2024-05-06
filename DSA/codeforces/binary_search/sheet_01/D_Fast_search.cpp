#include <bits/stdc++.h>
using namespace std;

#define endl "\n"



int main(){
    int n,k,L,R;
    cin >> n;
    vector<int> array(n);
    for(int i=0;i<n;i++){
        cin >> array[i];
    }
    cin >> k;
    sort(array.begin(),array.end());
    for(int i=1;i<=k;i++){
        cin >> L >> R;
        auto it1 = lower_bound(array.begin() ,array.end(), L);
        auto it2 = upper_bound(array.begin() ,array.end(), R);
        cout << it2 - it1 << " ";
    }
    return 0;
}
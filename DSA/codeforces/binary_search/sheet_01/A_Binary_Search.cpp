#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

bool check(int L,int R, int target,vector<int> &array){
    int mid;
    while(L <= R){
        mid = L + (R - L)/2;
        if(array[mid] == target){
            return true;
        }
        if(array[mid] < target){
            L = mid + 1;
        }else{
            R = mid - 1;
        }
    }
    return false;
}


int main(){
    int n,k;
    cin >> n >> k;
    vector<int> array(n);
    for(int i=0;i<n;i++){
        cin >> array[i];
    }
    for(int i=0;i<k;i++){
        int x;
        cin >> x;
        int l = 0,r = n-1;
        bool ok = check(l,r,x,array);
        if(ok){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}
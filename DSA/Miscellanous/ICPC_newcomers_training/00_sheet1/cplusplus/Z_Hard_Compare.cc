#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long A, B, C, D;
    cin >> A >> B >> C >> D;

    // Calculate A^B and C^D
    long double result_A = pow(A, B);
    long double result_C = pow(C, D);

    // Compare the results and print the output
    if (result_A > result_C) {
        cout << "YES" << endl;
    }
    else if(B == D){
        if(A > C){
        cout << "YES" << endl;
        }else {
        cout << "NO" << endl;
        }        
    } 
    else {
        cout << "NO" << endl;
    }

    return 0;
}

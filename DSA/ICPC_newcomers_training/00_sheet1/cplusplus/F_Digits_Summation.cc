

#include<iostream>
using namespace std;

int main(){
  long long  n,m,n_last,m_last,result;
  cin>>n>>m;

  n_last = n % 10;
  m_last = m % 10;

  result = n_last + m_last;
  cout<<result<<endl;
  
  return 0;
}
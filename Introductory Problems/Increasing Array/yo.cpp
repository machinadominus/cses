#include <iostream>
using namespace std;
 
//Compiler version g++ 6.3.
#define ll long long
 
int main()
{
   // cout << "Hello, Dcoder!";
  // int t;cin >> t; while(t--){solve();}
  int t; cin >> t;
  ll prev = 0, cnt =0;
  while(t--){
    ll n; cin >> n;
    if (n < prev){
      cnt += prev - n;
     
    }
    if (n < prev){prev = n + abs(prev - n);}  
    else{prev = n;}
  }
  cout << cnt <<"\n";
   return 0;
}/*
n is 6 n is not less the prev which is 0
n is 10 prev is 6 okay so 
n is 4 prev is 10 bad so cnt = 6, 
prev = 4*/



#include <iostream>
using namespace std;
#define ll long long 
ll diagonal(ll n){
  return n * n - n + 1;
}
void solve(){
  ll x, y; cin >> x >> y;
  if(x == y){cout << diagonal(x) << "\n";}
  if(x > y){
    if( x % 2 == 0){
        cout << diagonal(x) + abs(x - y) << "\n";
    }
    else{
      cout << diagonal(x) - abs(x - y) << "\n";
    }
  }
  else if(x < y){
    if(y % 2 == 0){
      cout << diagonal(y) - abs(x - y) << "\n";
    }
    else{
      cout << diagonal(y) + abs(x - y) << "\n";
    }
  }
}
 
int main() 
{
    int t; cin >> t; while(t--){solve();}
    return 0;
}



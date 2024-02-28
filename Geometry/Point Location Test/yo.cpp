#include <iostream>
using namespace std;
#define ll long long 
void solve(){
  ll a, b, c, d, e, f; cin >> a >> b >> c >> d >> e >> f;
  ll yo = ((c - a)*(f - b)) - ((e - a)*(d - b));
  if(yo == 0){cout << "TOUCH\n";}
  else if(yo > 0){cout << "LEFT\n";}
  else {cout << "RIGHT\n";}
}
 
int main() 
{
    int t; cin >> t; while(t--){solve();}
    return 0;
}

#include <iostream>
using namespace std;
#define ll long long 
 
int main() 
{
    //int t; cin >> t; while(t--){solve();}
    int n; cin >> n;
    if(n == 1){cout << 1 << "\n";return 0;}
    if(n == 4){
      cout << "2 4 1 3\n";return 0;
    }
    if(n > 4){
      for(int i = n; i >= 1; i--){
        if(i % 2 == 0){cout << i << " ";}
      }
      for(int i = n; i >= 1; i--){
        if(i % 2 != 0){cout << i << " ";}
      }
      cout << "\n";
    }
    else{
      cout << "NO SOLUTION\n";
    }
    return 0;
}

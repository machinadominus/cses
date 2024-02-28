#include <iostream>
#include <cmath>
using namespace std;
 
#define ll long long
int main()
{
   string s;
   cin >> s;
   int maximum = 0, cnt = 1;
   for(int i = 0; i < s.length(); i++){
     if(s[i] == s[i + 1]){
       ++cnt;
     }
     else{
       cnt = 1;
     }
     maximum = max(cnt, maximum);
   }
   cout << maximum << "\n";
    return 0;
}

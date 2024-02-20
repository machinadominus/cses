#include <iostream>
#include <cmath>
#include <set>
using namespace std;

#define ll long long
int main()
{
   int t;
   cin >> t;
   set<int> yo;
   while(t--){
   	int n;
   	cin >> n;
   	yo.insert(n);
   }
   cout << yo.size() << "\n";
    return 0;
}


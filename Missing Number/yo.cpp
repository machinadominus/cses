#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    long long n, sum = 0;
    cin >> n;
    long long arr[n];
    for(int i = 0; i < n - 1; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    cout << (n * (n + 1) / 2 ) - sum << "\n";
    return 0;
}

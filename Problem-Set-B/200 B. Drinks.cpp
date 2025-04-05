#include <iostream>
#include <cctype>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    int drink[n];
    int total=0;
    for(int i=0; i<n; i++){
        cin >> drink[i];
    }
    for(int i=0; i<n; i++){
        total += drink[i];
    }
    cout << (double)total/n;
   
    return 0;
}
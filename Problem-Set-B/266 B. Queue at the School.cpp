#include <iostream>
#include <cctype>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int t,n;
    cin >> n >> t;
    char que[n];
    for(int i=0; i<n; i++){
        cin >> que[i];
    }
    for(int i=0; i<t; i++){
        for(int i=0; i<n; i++){
            if(que[i] == 'B' && que[i+1]=='G'){
                swap(que[i], que[i+1]);
                i++;
            }
        }
    }
    for(int i=0; i<n; i++){
        cout << que[i];
    }
    return 0;
}
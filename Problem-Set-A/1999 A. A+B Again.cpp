#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string num[n];
    
    
    for(int i=0; i<n; i++){
        cin >> num[i];
    }
    
    for(int i=0; i<n; i++){
        int a = num[i][0] -'0';
        int b = num[i][1] - '0';
        cout << a+b << endl;
    }
}
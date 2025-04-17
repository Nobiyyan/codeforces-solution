#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >>n;
    int a[n], b[n], c[n];
    
    for(int i=0; i<n; i++){
        cin >> a[i] >> b[i] >> c[i];
    }
    for(int i=0; i<n; i++){
        if(a[i] + b[i] >=10 || a[i] + c[i] >=10 || b[i] + c[i] >= 10){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
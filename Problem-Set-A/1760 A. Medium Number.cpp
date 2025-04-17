#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n],b[n],c[n];
    for(int i=0; i<n; i++){
        cin >> a[i] >> b[i] >> c[i];
    }
    for(int i=0;i<n; i++){
        if(a[i] > b[i] && a[i] < c[i] || a[i] < b[i] && a[i] > c[i]){
            cout << a[i] << endl;
        }else if(b[i] > a[i] && b[i] < c[i] || b[i] < a[i] && b[i] > c[i]){
            cout << b[i] << endl;
        }else{
            cout << c[i] << endl;
        }
    }
    
    return 0;
}
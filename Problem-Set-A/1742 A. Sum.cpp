#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n], b[n],c[n];
    
    for(int i=0; i<n; i++){
        cin >> a[i] >> b[i] >> c[i];
    }
    
    for(int i=0; i<n; i++){
        if (a[i] + b[i] == c[i]){
            cout << "YES" << endl;
        }else if(a[i] + c[i] == b[i]){
            cout << "YES" << endl;
        }else if(b[i] + c[i] == a[i]){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}
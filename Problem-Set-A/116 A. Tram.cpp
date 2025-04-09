#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int keluar[n],masuk[n];
    
    for(int i=0; i<n; i++){
        cin >> keluar[i] >> masuk[i];
    }
    int maxvalue =0, total=0;
    for(int i=0; i<n; i++){
        total = total + masuk[i] - keluar[i];
        if(total > maxvalue){
            maxvalue = total;
        }
    }
    cout << maxvalue;

    return 0;
}
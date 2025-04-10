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
        if(num[i][0] + num[i][1] + num[i][2] == num[i][3] + num[i][4] + num[i][5]){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}
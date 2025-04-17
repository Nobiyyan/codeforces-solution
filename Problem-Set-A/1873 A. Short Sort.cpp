#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    
    vector<string> alpha(n);
    
    for(int i=0;i<n ;i++){
        getline(cin, alpha[i]);
    }
    for(int i=0;i<n; i++){
        if(alpha[i] == "bca" || alpha[i] == "cab"){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
    }
}
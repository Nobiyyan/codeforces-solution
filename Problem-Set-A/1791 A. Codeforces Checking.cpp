#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    char code[n];
    for(int i=0; i<n; i++){
        cin >> code[i];
    }
    
    unordered_set<char> codeforces = {'c','o','d','e','f','r','s'};
    for(int i=0; i<n; i++){
        if(codeforces.count(code[i])){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    char s[10] = {'c','o','d','e','f','o','r','c','e','s'};
    
    int n; cin >> n;
    string input[n];
    
    int total=0;
    for(int i=0; i<n; i++){
       cin >> input[i];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<10; j++){
            if(input[i][j] != s[j]){
                total++;
            }
        }
        cout << total << endl;
        total=0;
    }
    
    return 0;
}
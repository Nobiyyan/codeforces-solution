#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    
    for(int i=0; i<s.length(); i++){
        if(i+1 < s.length()){
            if(s[i]=='-' && s[i+1]=='-'){
                cout << '2';
                i++;
                continue;
            }else if(s[i]=='-' && s[i+1]=='.'){
                cout << '1';
                i++;
                continue;
            }
        }
        
        if(s[i]=='.'){
            cout << '0';
        }
        
    }
}
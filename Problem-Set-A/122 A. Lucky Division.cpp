#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string num = to_string(n);
    
    for(int i=0; i<num.length(); i++){
        if(num[i] != '4' && num[i] != '7'){
            if(n%4==0){
                cout << "YES";
                return 0;
            }else if(n%7==0){
                cout << "YES";
                return 0;
            }else if(n%47==0){
                cout << "YES";
                return 0;
            }else{
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
    
    
    return 0;
}
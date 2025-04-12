#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    int total=0;
    for(int i=1; i<=a; i++){
        b += i*5;
        if(b > 240){
            cout << total;
            return 0;
        }else{
            total++;
        }
    }
    cout << total;
    
    return 0;
    
}
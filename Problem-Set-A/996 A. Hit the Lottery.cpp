#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int total=0;
    
    while(n > 0){
        if(n>=100){
            total += n/100;
            n%=100;
        }else if(n >= 20){
            total += n/20;
            n%=20;
        }else if(n >= 10){
            total += n/10;
            n%=10;
        }else if(n >= 5){
            total += n/5;
            n%=5;
        }else if(n < 5){
            total += n;
            n=0;
        }
    }
    
    cout << total;
    
    return 0;
}
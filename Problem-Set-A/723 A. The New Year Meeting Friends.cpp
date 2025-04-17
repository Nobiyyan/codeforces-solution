#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int total1= abs(a-b) + abs(a-c),
    total2 = abs(b-a) + abs(b-c),
    total3 = abs(c-a) + abs(c-b);
    
    if(total1 <= total2 && total1 <= total3){
        cout << total1;
    }else if(total2 <= total1 && total2 <= total3){
        cout << total2;
    }else{
        cout << total3;
    }
    return 0;
}
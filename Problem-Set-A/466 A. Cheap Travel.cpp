#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,a,b;
    cin >> n >> m >> a >> b;
    int total1 = n*a, total2=n/m*b + (n%m)*a,total3=ceil((double)n/m)*b;
    if(total1 <= total2 && total1 <= total3){
        cout << total1;
    }else if(total2 <= total1 && total2 <= total3){
        cout << total2;
    }else {
        cout << total3;
    }
    return 0;
}
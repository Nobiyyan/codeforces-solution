#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b; cin >> a >> b;
    if(a > b){
        cout << b << " ";
        cout << ((a+b) - b*2) / 2;
    }else {
        cout << a << " ";
        cout << ((a+b) - a*2) / 2;
    }

    return 0;
}
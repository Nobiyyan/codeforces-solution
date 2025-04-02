#include <iostream>
#include <cctype>
using namespace std;
int main() {
    int total=0;
    int a,b;
    cin >> a>> b;
    while(a <= b){
        a*=3;
        b*=2;
        total++;
    }
    cout << total;
    return 0;
}
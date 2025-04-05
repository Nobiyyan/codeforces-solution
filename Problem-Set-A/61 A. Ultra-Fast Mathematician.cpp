#include <iostream>
#include <cctype>
#include <algorithm>
using namespace std;


int main() {
    string a,b;
    cin >> a;
    cin >> b;
    for(int i=0; i<a.length(); i++){
        if(a[i] != b[i]){
            cout << 1;
        }else if(a[i] == 1 && a[i]==1){
            cout << 0;
        }else{
            cout << 0;
        }
    }
    

    return 0;
}
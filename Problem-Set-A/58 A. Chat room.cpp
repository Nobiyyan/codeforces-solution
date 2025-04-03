#include <iostream>
#include <cctype>
#include <algorithm>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int total=0;
    
    string hello = "hello";
    for(char c : s){
        if(c == hello[total]){
            total++;
        }
        if (total == 5){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
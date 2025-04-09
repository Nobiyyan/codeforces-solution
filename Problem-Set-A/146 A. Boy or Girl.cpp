#include <bits/stdc++.h>
using namespace std;

int main() {
    string input;
    getline(cin, input);
    set<char> bruh;
    for(int i=0;i<input.length(); i++){
        char s = input[i];
        bruh.insert(s);
    }
    if(bruh.size() % 2 == 0){
        cout << "CHAT WITH HER!";
    }else{
        cout << "IGNORE HIM!";
    }

    return 0;
}
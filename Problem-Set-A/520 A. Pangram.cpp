#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    set<char> alpha;
    char input[n];
    for(int i=0; i<n; i++){
        cin >> input[i];
        char lowercase = tolower(input[i]); 
        alpha.insert(lowercase);
    }
    if(alpha.size() == 26){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}
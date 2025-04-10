
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string input;
    getline(cin, input);
    set<char> alpha;
    
    for(char c : input){
        if(isalpha(c)){
            alpha.insert(c);
        }
    }
    cout << alpha.size();
    
    return 0;
}
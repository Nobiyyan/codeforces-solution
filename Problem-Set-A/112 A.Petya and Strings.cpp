#include <iostream>
#include <cctype>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string word1, word2;
    int value, total1=0,total2=0;
    
    getline(cin, word1);
    getline(cin, word2);
    
    transform(word1.begin(), word1.end(), word1.begin(), ::tolower);
    transform(word2.begin(), word2.end(), word2.begin(), ::tolower);
    
    for(int i=0; i<min(word1.length(), word2.length()); i++){
        if( int(word1[i]) > int(word2[i]) ){
            cout << 1;
            return 0;
        }else if(int(word1[i]) < int(word2[i])){
            cout << -1;
            return 0;
        }
    }

    if(word1.length() > word2.length()) {
        cout << 1;  
    } else if(word1.length() < word2.length()) {
        cout << -1; 
    } else {
        cout << 0;  
    }
   

    return 0;
}

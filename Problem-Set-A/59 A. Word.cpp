#include <cctype>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string word;
    int lower=0,upper=0;
    
    getline(cin, word);
    
    for(int i=0; i<word.length(); i++){
        if(isupper(word[i])){
            upper+=1;
        }else{
            lower+=1;
        }
    }
    if(lower < upper){
        transform(word.begin(), word.end(), word.begin(), ::toupper);
        cout << word;
    }else{
        transform(word.begin(), word.end(), word.begin(), ::tolower);
        cout << word;
    }
}
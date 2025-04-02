#include <iostream>
#include <cctype>
#include <algorithm>
using namespace std;
int main() {
    string word;
    getline(cin, word);
    transform(word.begin(), word.end(), word.begin(), ::tolower);
    for(int i=0; i<word.length(); i++){
        if(word[i] == 'a' || word[i] == 'u' || word[i] == 'i' ||word[i] == 'e'|| word[i]=='o'|| word[i] == 'y'){
            word.erase(i, 1);
            i--;
        }
    }
    for(int i=0; i<word.length(); i++){
        cout << '.' << word[i];
    }
    return 0;
}

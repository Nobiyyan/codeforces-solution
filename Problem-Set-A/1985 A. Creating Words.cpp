#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(); 
    
    string word1[n],word2[n];
    for (int i = 0; i < n; i++) {
        cin >> word1[i] >> word2[i];
        swap(word1[i][0], word2[i][0]); 
    }

    for (int i = 0; i < n; i++) {
        cout << word1[i] << " " << word2[i] << endl;
    }
    return 0;
}
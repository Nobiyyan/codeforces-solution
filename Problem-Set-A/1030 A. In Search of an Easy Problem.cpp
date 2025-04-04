#include <iostream>
#include <cctype>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    int num[n];
    for(int i=0; i<n; i++){
        cin >> num[i];
    }
    for(int i=0; i<n; i++){
        if(num[i] == 1){
            cout << "HARD";
            return 0;
        }
    }
    cout << "EASY";

    return 0;
}
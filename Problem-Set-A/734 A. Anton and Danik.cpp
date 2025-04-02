#include <iostream>
#include <cctype>
#include <algorithm>
using namespace std;
int main() {
    int n,a=0,d=0;
    
    cin >> n;
    cin.ignore();
    
    char match[n];
    for(int i=0; i<n; i++){
        match[i] = cin.get();
    }
    for(int i=0; i<n; i++){
        if(match[i] == 'A'){
            a++;
        }else{
            d++;
        }
    }
    if(a>d){
        cout<< "Anton";
    }else if(a<d){
        cout << "Danik";
    }else{
        cout << "Friendship";
    }
}
#include <iostream>
#include <cctype>
#include <algorithm>
using namespace std;

int main() {
    int n,h;
    cin >> n >> h;
    int person[n],total=0;
    
    for(int i=0; i<n; i++){
        cin >> person[i];
    }
    for(int i=0; i<n; i++){
        if(person[i] > h){
            total+=2;
        }else{
            total++;
        }
    }
    
    cout<< total;
    return 0;
}
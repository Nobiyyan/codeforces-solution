#include <iostream>
#include <cctype>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    int poles[n], total=0;
    
    for(int i=0; i<n; i++){
        cin >> poles[i];
    }
    for(int i=0; i<n; i++){
        if(poles[i] != poles[i+1]){
            total++;
        }
    }
    if(n==1){
        total=1;
    }
    cout << total;
    
   
    return 0;
}
#include <iostream>
#include <cctype>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    int cap[n],per[n], total=0;
    
    for(int i=0; i<n; i++){
        cin >> per[i] >> cap[i];
    }
    for(int i=0; i<n; i++){
        if(cap[i] - per[i] >= 2){
            total++;
        }
    }
    cout << total;

    return 0;
}
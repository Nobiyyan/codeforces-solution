#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int num[n],maxValue=0;
    for(int i=0; i<n; i++){
        cin >> num[i];
    }
    
    for(int i=0; i<n; i++){
        if(num[i] > maxValue){
            maxValue = num[i];
        }
    }
    int total=0;
    for(int i=0; i<n; i++){
        total += maxValue - num[i];
    }
    cout << total;
    return 0;
}
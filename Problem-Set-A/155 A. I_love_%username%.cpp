#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int num[n];
    
    for(int i=0; i<n; i++){
        cin >> num[i];
    }
    
    int minValue = num[0], maxValue=num[0],total=0;
    for(int i=0; i<n; i++){
        if(num[i] > maxValue){
            total++;
            maxValue=num[i];
        }else if(num[i] < minValue){
            total++;
            minValue=num[i];
        }
    }
    cout << total;
    
    return 0;
}
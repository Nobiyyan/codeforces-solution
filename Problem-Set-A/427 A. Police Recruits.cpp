#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int total=0,crime=0;
    vector<int> num(n);
    
    for(int i=0; i<n; i++){
        cin >> num[i];
    }
    
    for(int i=0; i<n; i++){
        if(num[i] == -1 && total<=0){
            crime++;
            total=0;
        }else if(num[i]>=1){
            total+=num[i];
        }else if(num[i] == -1 && total >= 0){
            total--;
        }
    }
    cout << crime;
    return 0;
}
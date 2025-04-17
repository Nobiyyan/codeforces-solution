#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    long long total=0, arr[n][4];
    for(int i=0; i<n; i++){
        for(int j=0; j<4; ++j){
            cin >> arr[i][j];
        }
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<3; ++j){
            if(arr[i][0] < arr[i][j+1]){
                total++;
            }
        }
        cout << total << endl;
        total=0;
    }
    return 0;
    
}
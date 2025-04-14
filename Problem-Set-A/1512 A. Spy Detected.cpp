#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        vector<int> num(x);
        
        for(int j=0; j<x; j++){
            cin >> num[j];
        }
        
        for(int j=0; j<x-1; j++){
            if(num[0] != num[1] && num[0] == num[2]){
                cout << 2 ;
                break;
            }else if(num[0] != num[1] && num[0] != num[2]){
                cout << 1;
                break;
            }else if(num[j] != num[j+1]){
                cout << j+2;
                break;
            }
        }
        cout << endl;
    }
    return 0;
}
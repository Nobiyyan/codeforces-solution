#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int num[n], bagi[n],total=0;
    for(int i=0; i<n; i++){
        cin >> num[i] >> bagi[i];
    }
    for(int i=0; i<n; i++){
        if(num[i]%bagi[i]==0){
            cout << 0 << endl;
        }
        else{
            total = bagi[i] - (num[i]%bagi[i]);
            cout << total << endl;
        }
    }
    
    

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int num[n];
    for(int i=0; i<n; i++){
        cin >> num[i];
    }
    for(int i=0; i<n; i++){
        if(num[i]%2==0){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
    }

    return 0;
}
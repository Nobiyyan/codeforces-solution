#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int num[n],even=0,odd=0;
    for(int i=0; i<n; i++){
        cin >> num[i];
    }
    for(int i=0; i<n; i++){
        if(num[i]%2==0){
            even++;
        }else if(num[i]&2!=0){
            odd++;
        }
    }
    if(odd >= 2){
        for(int i=0; i<n; i++){
            if(num[i]%2==0){
                cout << i+1;
                return 0;
            }
        }
    }
    else if(even >=2){
        for(int i=0; i<n; i++){
            if(num[i]%2!=0){
                cout << i+1;
                return 0;
            }
        }
    }

    return 0;
}
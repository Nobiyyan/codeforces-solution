#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,s;
    cin >> s >> n;
    vector<pair<int, int>> dragon(n);
    
    for(int i=0; i<n; i++){
        cin >> dragon[i].first >> dragon[i].second;
    }
    
    sort(dragon.begin(), dragon.end());
    
    for(int i=0; i<n; i++){
        if(s <= dragon[i].first){
            cout << "NO";
            return 0;
        }else{
            s += dragon[i].second;
        }
    }
    cout << "YES";
    
    return 0;
}
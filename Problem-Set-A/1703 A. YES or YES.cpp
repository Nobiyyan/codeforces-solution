#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    
    vector<string> yes(n);
    for(int i=0; i<n; i++){
        getline(cin, yes[i]);
        transform(yes[i].begin(), yes[i].end(), yes[i].begin(), ::tolower);
    }
    for(int i=0; i<n; i++){
        if(yes[i] == "yes"){
            cout << "YES" <<endl;
        }else{
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> num(n);
    
    for(int i=0; i<n; i++){
        cin >> num[i];
    }
    
    for(int i=0; i<n; i++){
        vector<int> result;
        int total =0;
        for(int j=0; j<num[i].length(); j++){
            if(num[i][j] != '0'){
                total++;
                int digits = num[i][j] - '0';
                int value = digits*pow(10, num[i].length() - j - 1);
                result.push_back(value);
            }
        }
        cout << total << endl;
        for(int val : result){
            cout << val << ' ';
        }
        cout << endl;
    }
    
    return 0;
}
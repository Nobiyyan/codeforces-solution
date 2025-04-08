#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> num(n);
    vector<int> hasil(n);
    for(int i=0; i<n; i++){
        cin >> num[i];
    }
    for(int i=0; i<n; i++){
        int receiver = num[i];
        hasil[receiver-1] = i+1;
    }
    for(int i=0; i<n;i++){
         cout << hasil[i] << " ";
    }
   

    return 0;
}
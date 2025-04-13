#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;
   cin >> n;
   cin.ignore();
   
   string st[n];
   for(int i=0; i<n; i++){
       getline(cin, st[i]);
       transform(st[i].begin(), st[i].end(), st[i].begin(), ::tolower);
   }
   
   for(int i=0; i<n; i++){
       cout << st[i][0];
       for(int j=1; j<st[i].length(); j++){
           if(st[i][j-1] == ' '){
               cout << st[i][j];
           }
       }
       cout << endl;
   }

    return 0;
}
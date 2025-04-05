#include <iostream>
#include <cctype>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
   char stone[n];
  
   int total=0;
   for(int i=0; i<n; i++){
       cin >> stone[i];
   }
   for(int i=0; i<n; i++){
       if(stone[i] == stone[i+1]){
           total++;
       }
   }
   cout << total;
   
    return 0;
}
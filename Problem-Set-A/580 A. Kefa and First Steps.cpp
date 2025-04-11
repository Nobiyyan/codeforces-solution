#include <bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin >> n;
   int num[n];
   
   for(int i=0; i<n; i++){
       cin >> num[i];
   }
   
   int maxValue=0, total=1;
   for(int i=0; i<n-1; i++){
       if(num[i] <= num[i+1]){
           total++;
       }
       else if(num[i] > num[i+1]){
           if(total > maxValue){
               maxValue = total;
           }
           total=1;
       }
   }
   if(total > maxValue){
       maxValue = total;
   }
   cout << maxValue;
    
    return 0;
}
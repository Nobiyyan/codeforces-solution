#include <iostream>
#include <cctype>
#include <algorithm>
using namespace std;
 
 
int main() {
   string n;
   cin >> n;
   int total=0;
   for (int i=0; i<=n.length(); i++){
       if(n[i] == '4' || n[i] == '7'){
           total++;
       }
   }
   if(total == 4 || total == 7){
       cout << "YES";
   }else{
       cout << "NO";
   }
   
    return 0;
}
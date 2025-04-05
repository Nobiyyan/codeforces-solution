#include <iostream>
#include <cctype>
#include <algorithm>
using namespace std;


int main() {
   long long a,b,c,d;
   long long total=0;
   cin >> a >> b >> c >> d;
   if(a == b || a==c || a== d){
       total++;
   } if(b==c || b==d){
       total++;
   } if(c==d){
       total++;
   }
   cout << total;
    

    return 0;
}
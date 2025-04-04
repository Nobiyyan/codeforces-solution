#include <iostream>
#include <cctype>
#include <algorithm>
using namespace std;


int main() {
   int n,x=0,y=0,z=0;
   cin >> n;
   int a[n],b[n],c[n];
   for(int i=0; i<n; i++){
       cin >> a[i] >> b[i] >> c[i];
       x+=a[i];
       y+=b[i];
       z+=c[i];
   }
   if(x == 0 && z == 0 && y == 0){
       cout << "YES";
   }else{
       cout << "NO";
   }
   
   
    return 0;
}
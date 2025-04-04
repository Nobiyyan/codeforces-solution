#include <iostream>
#include <cctype>
#include <algorithm>
using namespace std;


int main() {
   int n;
   cin >> n;
   int year = n;
   
   do{
       year+=1;
       string yearc = to_string(year);
       if(yearc[0] != yearc[1] && yearc[0] != yearc[2] && yearc[0] != yearc[3] && yearc[1] != yearc[2] && yearc[1] != yearc[3] && yearc[2] != yearc[3]){
           cout << year;
           return 0;
       }
   }while(year > n);
   
   
    return 0;
}
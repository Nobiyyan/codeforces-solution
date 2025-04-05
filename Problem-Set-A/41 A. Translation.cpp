#include <iostream>
#include <cctype>
#include <algorithm>
using namespace std;
 
 
int main() {
   string string1,string1reverse;
   string string2;
   getline(cin, string1);
   getline(cin, string2);
   
   for(int i=string1.length()-1; i>=0; i-- ){
       string1reverse += string1[i];
   }
   
   if(string1reverse == string2){
       cout << "YES";
   }else{
       cout << "NO";
   }
   
   
    return 0;
}
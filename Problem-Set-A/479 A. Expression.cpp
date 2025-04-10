#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    
    int total1= a+b*c;
    int total2= a*(b+c);
    int total3= a*b*c;
    int total4= (a+b)*c;
    int total5= a*b+c;
    int total6= a+b+c;
    int total[6] = {total1, total2, total3, total4, total5,total6};
    
    int maxValue =0;
    for(int i=0; i<6; i++){
        if(total[i] > maxValue){
            maxValue = total[i];
        }
    }
    cout << maxValue;
    return 0;
}
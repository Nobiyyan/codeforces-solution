#include <iostream>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    int a,b,c;
    int total=0;
    for(int i=0; i<n; i++){
        cin >> a >> b >> c;
        if(a==1 && b==1){
            total +=1;
        }else if(a==1 && c==1){
            total +=1;
        
        }else if(b==1 && c==1){
            total +=1;
        }
    }
    cout << total;
}
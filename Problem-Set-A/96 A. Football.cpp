#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int main(){
    string player;
    int total=0;
    getline(cin, player);

    for(int i=0; i<player.length(); i++){
        if(player[i] == player[i+1]){
            total++;
        }else{
            total =0;
        }
        if(total == 6){
            cout << "YES";
            break;
        }
    }
    
    if(total <6){
        cout << "NO";
    }
}
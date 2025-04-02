#include <string>
#include <iostream>
using namespace std;
 
int main() {
    int n;
    
    cin >> n;
    cin.ignore();
    string* input = new string[n];
    for(int i=0; i<n; i++){
        getline(cin, input[i]);
    }
    for(int i=0; i<n; i++){
        if(input[i].length() > 10){
            cout << input[i][0] << input[i].length() - 2 << input[i][input[i].length() - 1] << endl;
        }
        else{
            cout << input[i] << endl;
        }
    }
    delete[] input;
    
 
    return 0;
}
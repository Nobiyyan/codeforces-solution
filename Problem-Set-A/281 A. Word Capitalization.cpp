#include <iostream>
#include <cctype>
using namespace std;
int main() {
    string bruh;
    cin >> bruh;
    
    if(!bruh.empty() && islower(bruh[0])){
        bruh[0] = toupper(bruh[0]);
    }
    cout << bruh;
}
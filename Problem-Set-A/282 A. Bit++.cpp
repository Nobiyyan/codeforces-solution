#include <string>
#include <iostream>
using namespace std;
int main() {
    string bruh;
    int total=0;
    int n;
    cin >> n;
    cin.ignore();
    for(int i=0; i<n; i++){
        
        getline(cin, bruh);
        
            if (bruh == "X++" || bruh == "++X") {
                total++;
            } else if (bruh == "X--" || bruh == "--X") {
                total--;
            }
    }
    
    cout << total;
 
    return 0;
}
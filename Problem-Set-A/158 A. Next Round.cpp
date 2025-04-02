#include <iostream>
using namespace std;
int main() {
    int n;
    
    int num[100];
    int nilai;
    int total = 0;
    cin >> n >> nilai;
    for(int i=0; i<n; i++){
        cin >> num[i];
    }
    int threshold = num[nilai - 1];
    
    for(int i=0; i<n; i++){
        if(num[i] >= threshold && num[i] > 0 )
        total++;
    }
    cout << total;
    return 0;
}
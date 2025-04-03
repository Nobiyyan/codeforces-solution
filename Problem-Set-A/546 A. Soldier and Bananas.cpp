#include <iostream>
using namespace std;
int main() {
    int k,n,w, harga=0;
    int total=0;
    cin >> k >> n >> w;
    for(int i=1; i<=w; i++){
        harga = i*k;
        total= total + harga;
    }
    if(total - n < 1){
        cout << 0;
    } else {
        cout << total-n;
    }
 
    return 0;
}
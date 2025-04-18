#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int price[n];
    for (int i = 0; i < n; i++) {
        cin >> price[i];
    }
    
    sort(price, price + n);
    
    int x;
    cin >> x;
    for (int i = 0; i < x; i++) {
        int c;
        cin >> c;
    
        auto it = upper_bound(price, price + n, c);

        int total = it - price;
        cout << total << endl;
    }
    
    return 0;
}
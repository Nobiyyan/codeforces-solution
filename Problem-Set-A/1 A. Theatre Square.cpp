#include <iostream>
using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;

    long long flagstones_width = (n + a - 1) / a;  
    long long flagstones_height = (m + a - 1) / a; 

    cout << flagstones_width * flagstones_height << endl;

    return 0;
}
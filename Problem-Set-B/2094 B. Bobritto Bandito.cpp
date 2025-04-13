#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> n(t), m(t), l(t), r(t);
   
    for(int i = 0; i < t; i++) {
        cin >> n[i] >> m[i] >> l[i] >> r[i]; 
    }
   
    for(int i = 0; i < t; i++) {

        int left_expansion = min(m[i], -l[i]);
        int right_expansion = m[i] - left_expansion;

        int l_prime = -left_expansion;
        int r_prime = right_expansion;

        if (l_prime < l[i]) {
            int shift = l[i] - l_prime;
            l_prime += shift;
            r_prime += shift;
        } else if (r_prime > r[i]) {
            int shift = r_prime - r[i];
            l_prime -= shift;
            r_prime -= shift;
        }

        cout << l_prime << ' ' << r_prime << endl;
    }
   
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    
    int total1 = k*l/nl;
    int total2 = c*d;
    int total3 = p/np;
    
    cout << min({total1, total2, total3})/n;
    
    return 0;
}
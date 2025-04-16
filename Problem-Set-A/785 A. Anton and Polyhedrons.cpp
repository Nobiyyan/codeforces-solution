#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string block[n];
    
    for(int i=0; i<n; i++){
        cin >> block[i];
    }
    int total=0;
    for(int i=0; i<n;i++){
        if(block[i] == "Tetrahedron"){
            total += 4;
        }else if(block[i] == "Cube"){
            total += 6;
        }else if(block[i] == "Octahedron"){
            total += 8;
        }else if(block[i] == "Dodecahedron"){
            total += 12;    
        }else if(block[i] == "Icosahedron"){
            total += 20;
        }
    }
    cout << total;
    return 0;
}
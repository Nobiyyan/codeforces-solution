#include <iostream>
#include <cctype>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
    
    int n;
    cin >> n;
    vector<pair<int, int >> team(n);

    int total=0;
    
    for(int i=0; i<n; i++){
        cin >> team[i].first >> team[i].second;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i == j)continue;
            if(team[i].first == team[j].second){
                total++;
            }
        }
    }
    cout << total;
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int m; string n; cin >> n >> m;
    for(auto x : n){
        x = (x - 'a' + m) % 26 + 'a';
        cout << x;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    char n; int m; cin >> n >> m;
    if(n == 'H' && m == 4567) cout << "safe unlocked";
    else if(n == 'H') cout << "safe locked - change digit";
    else if(m == 4567) cout << "safe locked - change char";
    else cout << "safe locked";
}
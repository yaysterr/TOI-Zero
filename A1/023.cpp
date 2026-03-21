#include <bits/stdc++.h>
using namespace std;

int main() {
    int m; char n; cin >> m >> n;
    n = tolower(n);
    if (n == 'c') {
        if (m >= 100) cout << "gas";
        else if (m > 0) cout << "liquid";
        else cout << "solid";
    } 
    else { 
        if (m >= 212) cout << "gas";
        else if (m > 32) cout << "liquid";
        else cout << "solid";
    }
    return 0;
}

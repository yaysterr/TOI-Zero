#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    if (n > 2000) cout << (m > 2000 ? 1500 : m > 1500 ? 1200 : 1000);
    else if (n > 1990) cout << (m > 2000 ? 1700 : m > 1500 ? 1300 : 1100);
    else cout << (m > 2000 ? 2000 : m > 1500 ? 1400 : 1250);
    return 0;
}

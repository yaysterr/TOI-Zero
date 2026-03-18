#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m; cin >> n >> m;
    cout << n+m << '\n';
    if(n+m > 49) cout << "pass";
    else cout << "fail";
    return 0;
}
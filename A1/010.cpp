#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; char m; cin >> n >> m ;
    if(n < 18 || m == 's' || m == 'S') cout << 20;
    else cout << 50;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m; cin >> n >> m;
    if(n>6 || n<1 || m>6 || m<1) cout << "Invalid";
    else{
        if(n == m) cout << "Correct!";
        else cout << "Wrong!";
    }
    return 0;
}
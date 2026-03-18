#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,p; char op;cin >> n >> op;
    m = (n%10)*10+(n/10);
    if(op == '+') p=n+m;
    else p = n*m;
    cout << n << ' ' << op << ' ' << m << " = " << p;
    return 0;
}
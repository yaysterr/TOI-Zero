#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c; cin >> a >> b >> c;
    if(a+b+c > 2) cout << int(((25*a)+(40*b)+(55*c))*0.9);
    else cout << (25*a)+(40*b)+(55*c);
    return 0;
}
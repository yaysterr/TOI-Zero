#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c; cin >> a >> b >> c;
    if(a==b && b ==c) cout << "all the same" ;
    else if(a==b || b==c || a==c) cout << "neither";
    else cout << "all different";
    return 0;
}
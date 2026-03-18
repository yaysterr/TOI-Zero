#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll a,b,c; cin >> a >> b >> c;
    if(a < b && b < c) cout << "increasing";
    else if(a > b && b > c) cout << "decreasing";
    else cout << "neither";
}
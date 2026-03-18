#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll m = LLONG_MAX;
    for(int i=0;i<3;i++){
        ll x; cin >> x;
        if(x < m) m = x;
    }
    cout << m;
    return 0;
}
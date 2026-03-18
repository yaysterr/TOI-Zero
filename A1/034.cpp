#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n,mi=LLONG_MAX; cin >> n;
    for(int i=0;i<n;i++){
        ll x; cin >> x;
        if(x < mi) mi = x;
    }
    cout << mi;
}
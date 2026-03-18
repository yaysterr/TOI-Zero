#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll max = LLONG_MIN;
    for(int i=0;i<3;i++){
        ll n; cin >> n;
        if(n > max) max = n;
    }
    cout << max;
}
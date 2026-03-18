#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n; cin >> n;
    cout << "10 = " << n/10 << '\n'; n=n-(10*(n/10));
    cout << "5 = " << n/5 << '\n'; n=n-(5*(n/5));
    cout << "2 = " << n/2 << '\n'; n=n-(2*(n/2));
    cout << "1 = " << n;
    return 0;
}
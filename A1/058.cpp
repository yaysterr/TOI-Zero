#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    double n,s=0,mx=LLONG_MIN,mn=LLONG_MAX; cin >> n;
    for(int i=0;i<n;i++){
        int m; cin >> m;
        s+=m;
        if(m > mx) mx = m;
        if(m < mn) mn = m;
    }
    cout << s << '\n' << mx << '\n' << mn << '\n' << fixed << setprecision(1) << s/n;
}

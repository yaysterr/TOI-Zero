#include <bits/stdc++.h>
using namespace std;

int main(){
    bool p = true;
    double n,m,s=0; cin >> n;
    for(int i=0;i<n;i++){
        cin >> m;
        if(m < 50) p = false;
        s+=m;
    }
    if(s/n < 60) p = false;
    cout << fixed << setprecision(1) << s/n << '\n';
    if(p) cout << "PASS";
    else cout << "FAIL";
    return 0;
}
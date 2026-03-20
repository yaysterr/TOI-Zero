#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,a,m; cin >> n;
    while(cin >> a >> m){
        if(a < 15) cout << -1 << '\n';
        else if(m > n) cout << -2 << '\n';
        else{
            int p=150;
            if(a <= 22) p = 120;
            else if(a>=60) p = 75;
            n-=m;
            cout << p*m << ' ' << n << '\n';        
        }
        if(n < 1) break;
    }
}
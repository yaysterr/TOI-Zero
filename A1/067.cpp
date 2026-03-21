#include <bits/stdc++.h>
using namespace std;

int main(){
    char a; int n; double s=0, d=1; cin >> a >> n;
    for(int i=0; i<n; i++){
        double p; cin >> p; s+=p;
    }
    if(a == 'Y' || a == 'y') d=0.95;
    else if(s >= 500) d=0.97;
    cout << fixed << setprecision(2) << round(s*d*100 + 1e-9)/10;
}
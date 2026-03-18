#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,a,x; cin >> n >> a;
    x = n*a;
    if(x == 0) cout << "No teaching";
    else if(x/60 == 0) cout << x << " minutes";
    else if(x%60 == 0) cout << x/60 << " hours";
    else cout << x/60 << " hours " << x-(x/60)*60 << " minutes";
    return 0;
 }
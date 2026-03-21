#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    for(int i=0;i<n;i++){
        float a,b,c,s; cin >> a >> b >> c;
        s = a+b+c;
        cout << fixed << setprecision(1) << s;
        if(s > 50) cout << ",Overloaded";
        if(a > 20) cout << ",Check Type Plastic";
        if(b > 20) cout << ",Check Type Can";
        if(c > 20) cout << ",Check Type Glass";
        cout << '\n';
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    string r,s; int a; cin >> r >> s >> a;
    if(r.size() > 5 || s.size() > 5) cout << r[0] << r[1] << s.back() << a%10;
    else cout << r[0] << a << s.back();
    return 0;
}
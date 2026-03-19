#include <bits/stdc++.h>
using namespace std;
int main(){
    char p; double a, s, r = 0; int b = 0;
    if (!(cin >> p >> a >> s)) return 0;
    if (p == 'M') b = 1500, r = (a >= 10 ? .1 : a >= 5 ? .08 : .06);
    else if (p == 'B') b = 1000, r = (a >= 10 ? .07 : a >= 5 ? .06 : .05);
    else if (p == 'G') b = 500, r = (a >= 10 ? .06 : a >= 5 ? .05 : .04);
    else return cout << 0, 0;
    cout << (long long)(s * r + b);
}
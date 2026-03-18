#include <bits/stdc++.h>
using namespace std;

int main(){
    int level,special;
    double base,bonus,multiply,point; cin >> base >> bonus >> multiply;
    point = (multiply > 3) ? (base+bonus)*1.5 : 
        base+bonus;
    cout << point << '\n';
    level = (point >= 1500) ? 5 :
        (point >= 1000) ? 4 :
        (point >= 500) ? 3 :
        (point >= 200) ? 2 :
        1;
    cout << level << '\n';
    special = (level == 5 && multiply >= 7) ? 99 :
        (level == 4 && bonus >= 300) ? 88 :
        0;
    cout << special ;
    return 0;
}

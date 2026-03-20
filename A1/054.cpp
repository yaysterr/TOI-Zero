#include <bits/stdc++.h>
using namespace std;

int main(){
    char a; 
    double b, c; 
    long long y = 0;
    double z = 0;
    if (!(cin >> a >> b >> c)) return 0;
    a = toupper(a);
    if (a == 'M') y = 1500;
    else if (a == 'B') y = 1000;
    else if (a == 'G') y = 500;
    else {
        cout << 0 << endl;
        return 0;
    }
    if (a == 'M') {
        if (b >= 10) z = 0.10;
        else if (b >= 5) z = 0.08;
        else z = 0.06;
    } 
    else if (a == 'B') {
        if (b >= 10) z = 0.07;
        else if (b >= 5) z = 0.06;
        else z = 0.05;
    } 
    else if (a == 'G') {
        if (b >= 10) z = 0.06;
        else if (b >= 5) z = 0.05;
        else z = 0.04;
    }
    long long total_bonus = y + (long long)(c * z);
    cout << total_bonus << endl;

    return 0;
}
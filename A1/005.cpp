#include <bits/stdc++.h>
using namespace std;

int main(){
    int m,d; cin >> m >> d;
    if(d >= 21) m+=1;
    if(m > 12)cout << "winter";
    else if(m > 9)cout << "fall";
    else if(m > 6)cout << "summer";
    else if(m > 3)cout << "spring";
    else cout << "winter";
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define fml pow(x,2)+pow(y,2)
int main(){
    int x,y,r; cin >> r >> x >> y;
    if(fml > pow(r,2)) cout << "OUT";
    else if(fml == pow(r,2)) cout << "ON";
    else cout << "IN";
    return 0;
}
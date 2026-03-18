#include <bits/stdc++.h>
using namespace std;

int main(){
    string n; cin >> n;
    int x=0,y=0;
    for(int i=0;i<n.size();i++){
        if(n[i] == 'N') y++;
        else if(n[i] == 'S') y--;
        else if(n[i] == 'W') x--;
        else if(n[i] == 'E') x++;
    }
    cout << x << ' ' << y << ' ' << abs(x)+abs(y);
    return 0;
}
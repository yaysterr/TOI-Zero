#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[6],ans=0;
    for(int i=0;i<6;i++) cin >> a[i];
    for(int i=0;i<3;i++){
        if(a[i] < a[i+3]) { ans = 1; break; }
        if(a[i] > a[i+3]) { ans = 2; break; }
    }
    cout << ans;
    return 0;
}

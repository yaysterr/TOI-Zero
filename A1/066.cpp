#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,c=0,s=0; cin >> n >> m;
    while(s < m){
        if(n <= 0){
            cout << -1;
            return 0;
        }
        s+=n; n-=2; c++;
    }
    cout << c;
}
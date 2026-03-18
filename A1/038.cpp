#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
int main(){
    ull n; cin >> n;
    for(int i=1;i<=n;i++){
        if(i%5==0) cout <<'X';
        else cout << '*';
    }
    return 0;
}
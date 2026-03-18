#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
int main(){
    ull n,sum=0; cin >> n;
    for(int i=1;i<=n;i++){
        sum+=(i*i);
    }
    cout << sum;
}
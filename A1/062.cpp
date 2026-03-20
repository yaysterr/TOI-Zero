#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c=0; cin >> a >> b;
    for(int i=a;i<=b;i++){
        if(i<2) continue;
        bool pm = true;
        for(int j=2;j*j<=i;j++){
            if(i%j==0 || i == 1){
                pm =false;
                break;
            }
        }
        if(pm ){
            cout << i << ' ';
            c++;
        }
    }
    cout << '\n' <<"Total primes: " << c;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    if(n%100 != 0 || n < 100 || n > 20000){
        cout <<"ERROR";
        return 0;
    }
    else{
        if(n >= 1000){
            cout << "1000 = " << n/1000 << '\n';
            n%=1000;
        }
        if(n >= 500){
            cout <<"500 = " << n/500 << '\n';
            n%=500;
        }
        if(n>= 100)cout << "100 = " << n/100;
    }
    return 0;
}
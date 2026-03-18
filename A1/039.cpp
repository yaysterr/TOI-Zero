#include <bits/stdc++.h>
using namespace std;
#define ulli unsigned long long int

ulli fac(int a){
    if(a == 0 || a == 1) return 1;
    else return a * fac(a-1);
}

int main(){
    int n; cin >> n;
    ulli a = fac(n);
    cout << a; 
    return 0;
}
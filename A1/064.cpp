#include <bits/stdc++.h>
using namespace std;

int main(){
    int p=0,n; cin >> n;
    for(int i=0;i<n;i++){
        char a; cin >> a;
        if(a == '+') p+=10;
        else if(a =='-') p-=5;
    }
    cout << p;
}
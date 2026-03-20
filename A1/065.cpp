#include <bits/stdc++.h>
using namespace std;

int main(){
    for(int i=0;i<5;i++){
        int n; cin >> n;
        if(n == 0) cout << '-';
        else{
            if(n/1000 > 0) cout << '#';
            if((n/100)%10 > 0) cout << '/';
            if((n/10)%10 > 0) cout << '+';
            if(n%10 > 0) cout << '*';
        }
    }
}
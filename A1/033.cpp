#include <bits/stdc++.h>
using namespace std;

int main(){
    string z="AEIOU";
    int n,y=0; cin >> n;
    for(int i=0;i<n;i++){
        char a; cin >> a;
        for(int j=0;j<z.size();j++){
            if(a == z[j]) y++;
        }
    }
    cout << y;
}
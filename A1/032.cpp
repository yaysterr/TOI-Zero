#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    for(int i=0;i<n;i++) cout << '*';
    if(n-2 >= 1){
        cout << '\n';
        for(int j=0;j<n-2;j++) cout <<'*';
        if(n-4 >= 1){
            cout << '\n';
            for(int k=0;k<n-4;k++) cout <<'*'; 
        }
    }
}
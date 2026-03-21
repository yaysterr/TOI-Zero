#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m; cin >> n >> m;
    for(int i=0;i<n;i++){
        if(i < n/2) for(int j=0;j<m;j++) cout << 'A' << ' ';
        else if(i*2+1 == n)  for(int j=0;j<m;j++) cout << 'A' << ' ';
        else for(int j=0;j<m;j++) cout << 'K' << ' ';
        cout << '\n';
    }
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[6];
    for(int i=0;i<6;i++){
        cin >> a[i];
    }
    for(int i=0;i<3;i++){
        cout << (a[i]+a[i+3])/2 << ' ';
    }
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    string n,m="aeiou"; cin >> n;
    int a=0;
    for(int i=0;i<n.size();i++){
        for(int j=0;j<m.size();j++){
            if(n[i] == m[j]) a++;
        }
    }
    cout << a;
}
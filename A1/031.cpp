#include <bits/stdc++.h>
using namespace std;

int main(){
    string a,b; int c=0; cin >> a;
    while(!a.empty()){
        b.insert(b.begin(),a.back());
        a.pop_back();
        c++;
        if(c == 3 && !a.empty()){
            b.insert(b.begin(),',');
            c = 0;
        }
    }
    cout << b;
}
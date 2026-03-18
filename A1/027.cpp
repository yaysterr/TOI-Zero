#include <bits/stdc++.h>
using namespace std;

int main(){
    string n,a; cin >> n;
    for(char x : n) a.push_back(tolower(x));
    reverse(a.begin(), a.end());
    cout << a;
}
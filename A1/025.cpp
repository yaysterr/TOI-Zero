#include <bits/stdc++.h>
using namespace std;

int main(){
    string a,o,t; cin >> a;
    for (char &x : a) x = tolower(x);
    char b = a.back() ; a.pop_back();
    if(b == 'd') o = "diamonds";
    else if(b == 'h') o = "hearts";
    else if(b == 's') o = "spades";
    else if(b == 'c') o = "clubs";
    if(a == "a") t = "ace";
    else if(a == "q") t = "queen";
    else if(a == "j") t = "jack";
    else if(a == "K") t = "king";
    else t = a;
    cout << t << " of " << o ;
}
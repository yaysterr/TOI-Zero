#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; bool c=false; cin >> n;
    if(n == 1500) c =true;   
    else if(n%400==0) c=true;
    else if(n%4==0){
        c = (n%100 == 0) ? false : true ;
    }
    if(c) cout << "yes";
    else cout << "no";
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,price=35; cin >> n;
    if(n > 10) price+=(n-10)*8+45;
    else if(n > 1) price+=((n-1)*5);
    cout <<  price;
}
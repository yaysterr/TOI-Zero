#include <bits/stdc++.h>
using namespace std;
#define ER { cout << "Error"; return 0;}

int main(){
    string a,b; int n,x,y; cin >> a >> b >> n;
    if(a == "BKK"){
        if(b == "CNX") n=(n*30)+10;
        else if(b == "PKT") n=(n*50)+25;
        else ER
    }
    else if(a == "CNX"){
        if(b == "UBP") n=n*40+15;
        else ER
    }
    else if(a == "UBP"){
        if(b == "BKK") n=n*40+20;
        else if(b == "PKT") n=n*70+40;
        else ER
    }
    else if(a == "PKT"){
        if(b == "CNX") n =n*60+30;
        else ER
    }
    else ER
    cout << n;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    string n,m;
    cin >> n;
    int a1,a2,a3,a4,a5;
    a1 = n[0] - '0';
    a2 = n[1] - '0';
    a3 = n[2] - '0';
    a4 = n[3] - '0';
    a5 = n[4] - '0';

    if(a1 > 5) m='9';
    else if(a2 > 5) m="10";
    else if(a3 > 5) m="11";
    else if(a4 > 5) m="12";
    else if(a5 > 5) m="14";
    else m="13";
    bool pld = (a1 == a5 && a2 == a4);
    if(pld){
        if(a1 + a5 > 5) m+='1';
        else if(a2 * a4 > 5) m+='2';
        else m+='0';
    }
    else{
        if(a5 !=0 && a1/a5 > 5) m+='1';
        else if(a2-a5 > 5)m+='2';
        else m+='0';
    } 
    if(a1+a2+a3+a4+a5 > 25) m+='1';
    else if(a1*a2*a3*a4*a5 > 55) m+='2';
    else m+='0';
    cout << m;
}
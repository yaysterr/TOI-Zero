#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n=0,m=0;
    for(int i=0;i<3;i++){
        ll a; cin >> a;
        if(a%2 == 0) n+=1;
        else m +=1;
    }
    cout << "even " << n << '\n' << "odd " << m;
}
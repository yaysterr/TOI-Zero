#include <bits/stdc++.h>
using namespace std;

int main(){
    string a[9]={"I","II","III","IV","V","VI","VII","VIII","IX"}; int n; cin >> n;
    if(n < 0) cout << "Error : Please input positive number";
    else if(n > 9 || n==0) cout << "Error : Out of range";
    else cout << a[n-1];
}
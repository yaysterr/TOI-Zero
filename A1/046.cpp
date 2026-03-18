#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,sum=0,odd=0,even=0; cin >> n;
    for(int i=0;i<n;i++){
        int x; cin >> x;
        sum+=x;
        if(x%2==0) even++;
        else odd++;
    }
    cout << "SUM " << sum << '\n' << "EVEN " << even << '\n' << "ODD " << odd;  
}
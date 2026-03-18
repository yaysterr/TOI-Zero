#include <bits/stdc++.h>
using namespace std;

int main(){
    string ans="";
    int n,sum=0; cin >> n;
    for(int i=0;i<n;i++){
        int a,b; cin >> a >> b;
        if(a > b){
            ans+=" + "; ans+=to_string(a);
            sum+=a;
        }
        else{
            ans+=" + "; ans+=to_string(b);
            sum+=b;
        }
    }
    ans.erase(0,3);
    if(n > 1)cout << ans << " = " << sum;
    else cout << sum;
}
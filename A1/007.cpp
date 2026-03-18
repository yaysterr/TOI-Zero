#include <bits/stdc++.h>
using namespace std;

int main(){
    char m; cin >> m;
    string n = "aeiouAEIOU";
    for(int i=0;i<n.size();i++){
        if(m == n[i]){
            cout << "yes";
            return 0;
        }
    }
    cout << "no";
    return 0;
}
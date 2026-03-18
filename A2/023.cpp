#include <bits/stdc++.h>
using namespace std;

int main(){
    bool chk;
    int y=0,z=0;
    string n; cin >> n;
    for(auto &x : n) x=tolower(x);
    for(int i=0;i<n.size();i++){
        if(n[i] == 'r'){
            if(n[i+1] == 'a') chk = true;
            else{
                chk = false; y=i;
                break;
            }
        }
        else if(n[i] == 'b'){
            if(n[i+1] == 't' || n[i+1] =='i'){
                chk = true;
            }
            else{
                chk = false; y=i;
                break;
            }
        }
    }
}

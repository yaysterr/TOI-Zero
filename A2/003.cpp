#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,c=0; cin >> n;
    vector<int> nest;
    for(int i=0;i<n;i++){
        int x; cin >> x; nest.push_back(x);
    }
    for(int i=0;i<nest.size();i++){
        if(i == 0){
            if(nest[i] > nest[i+1]) c++;
        }
        else if(i == nest.size()-1){
            if(nest[i] > nest[i-1]) c++;
        }
        else{
            if(nest[i] > nest[i-1] && nest[i] > nest[i+1]) c++;
        }
    }
    cout << c;
    return 0;
}
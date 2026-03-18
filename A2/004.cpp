#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,c=1,mc=0; cin >> n;
    vector<int> a;
    for(int i=0;i<n;i++){
        int x; cin >> x; a.push_back(x);
    }
    sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++){
        if(i<n & a[i] == a[i-1]){
            c++;
        }
        else{
            mc = max(c,mc);
            c = 1;
        }
    }
    cout << mc;
    return 0;
}
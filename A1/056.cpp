#include <bits/stdc++.h>
using namespace std;

int main(){
    double n[6];
    for(int i=0;i<6;i++) cin >> n[i];
    cout << fixed << setprecision(2) << pow((pow(n[3]-n[0],2)+pow(n[1]-n[4],2)+pow(n[2]-n[5],2)),0.5);
}
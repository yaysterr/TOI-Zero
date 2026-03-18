#include <bits/stdc++.h>
using namespace std;

void cut(string n,vector<int> &data){
    stringstream ss(n);
    string words;
    while(ss >> words) data.push_back(stoi(words));
}

int main(){
    int w=0,m=0;string n; vector<int> data;
    getline(cin,n);
    cut(n,data);
    for(auto x : data){
        if(x >= 0){
            if(x%2 == 0) w++;
            else m++;
        }
    }
    cout << m << ' ' << w << ' ' << m+w;
}
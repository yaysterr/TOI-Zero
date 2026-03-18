#include <bits/stdc++.h>
using namespace std;

int main(){
    int sum=0,a,n[]={100,120,200,60}; cin >> a;
    while(a != 5){
        sum +=n[a-1];
        cin >> a;
    }
    cout << "Bye Bye\n" << "Total Calories: " << sum;
    return 0;
}
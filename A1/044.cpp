#include <bits/stdc++.h>
using namespace std;

int main(){
    int age ; string day ; cin >> age >> day; 
    int price = (age > 18) ? 150 : (age > 4) ? 100 : 0 ;
    if(day[0] == 'W') price/=2;
    cout << price ;
    return 0;
}
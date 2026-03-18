#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    double ft = n*0.5;
    double base_cost = 0;
    if (n > 200) {
        base_cost += (n - 200) * 15;
        n = 200;
    }
    if (n > 100) {
        base_cost += (n - 100) * 12;
        n = 100;
    }
    if (n > 50) {
        base_cost += (n - 50) * 10;
        n = 50;
    }
    if (n > 10) {
        base_cost += (n - 10) * 7;
        n = 10;
    }
    base_cost += n * 5;
    cout << fixed << setprecision(2) << base_cost + (0.07*base_cost) + ft;
}
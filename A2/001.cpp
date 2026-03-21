#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    if (!(cin >> n >> m)) return 0;
    vector<long long> red(n + 1), blue(m + 1);
    red[0] = 0; blue[0] = 0;
    for (int i = 1; i <= n; i++) {cin >> red[i];}
    for (int j = 1; j <= m; j++) {cin >> blue[j];}
    int c = 0;
    for (int i = 1; i <= n; i++) {
        long long rl = red[i - 1];
        long long rr = red[i];
        for (int j = 1; j <= m; j++) {
            long long bl = blue[j - 1];
            long long br = blue[j];
            if (rl == bl && (i % 2 == j % 2)) c++;
            else if (rr == br && (i == n || j == m)) c++;
            else if (((bl < rl && br > rr) || (bl > rl && br < rr)) && (i % 2 == j % 2)) c++;
            else if ((bl < rr && br > rl) && (i % 2 != j % 2)) c++;
        }
    }
    cout << c << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    int d,m; cin>>d>>m;
    string z[]={"capricorn","aquarius","pisces","aries","taurus","gemini",
                "cancer","leo","virgo","libra","scorpio","sagittarius"};
    int cut[]={20,19,21,20,21,22,23,23,23,24,22,22};
    cout<<z[(m-1 + (d>=cut[m-1]))%12];
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <string>
#define ll long long
#define modu 1000000007
using namespace std;

int main()
{

    ll n;
    cin >> n;
    ll ls = 0, ms = 0, rs = 0;
    while (n--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        ls += a;
        ms += b;
        rs += c;
    }

    if (ls == 0 && rs == 0 && ms == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
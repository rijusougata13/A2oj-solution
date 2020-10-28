#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#define ll long long
#define modu 1000000007
using namespace std;

int main()
{
    ll n, count = 0;
    cin >> n;
    while (n--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        if ((a + b + c) >= 2)
            count++;
    }
    cout << count << endl;
    return 0;
}
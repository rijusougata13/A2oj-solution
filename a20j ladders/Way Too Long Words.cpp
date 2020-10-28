#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#define ll long long
#define modu 1000000007
using namespace std;

int main()
{
    ll n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        if (s.size() > 10)
        {
            cout << s[0] << s.size() - 2 << s[s.size() - 1] << endl;
        }
        else
        {
            cout << s << endl;
        }
    }
    return 0;
}
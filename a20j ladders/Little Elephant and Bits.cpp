#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#define ll long long
#define modu 1000000007
#define f(i, n) for (int i = 0; i < n; i++)
#define fo(i, j, n) for (int i = j; i < n; i++)
#define print(x) cout << x << endl
using namespace std;
#define max 500


void solve(void);
int main()
{
#ifndef ONLINE_JUDGE
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);

    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);
#endif
    long long t = 1;
    // cin >> t;
    while (t--)
        solve();

#ifndef ONLINE_JUDGE
    cout << "\nTime Elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " sec\n";
#endif
    return 0;
}



void solve(void)
{
    string v;
    cin >> v;
    ll flag = 1;

    for (ll i = 0; i < v.size() ; i++) {
        if (flag == 1 && v[i] == '0') {
            flag = 0;
            continue;
        }
        if (flag == 1 && i == v.size() - 1) continue;
        cout << v[i] << "";
    }
    cout << endl;



}
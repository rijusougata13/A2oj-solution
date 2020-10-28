#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
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
    //cin >> t;
    while (t--)
        solve();

#ifndef ONLINE_JUDGE
    cout << "\nTime Elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " sec\n";
#endif
    return 0;
}

bool sol(ll n) {
    set<int>v;
    while (n > 0) {
        v.insert(n % 10);
        n = n / 10;
    }
    if (v.size() != 4) return false;
    return true;
}
void solve(void)
{
    ll n;
    cin >> n;
    for (int i = n + 1; i <= 1e6; i++) {
        if (sol(i)) {
            print(i);
            break;
        }
    }
}
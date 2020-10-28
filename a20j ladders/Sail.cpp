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

bool comp(string s, string p, int n, int m) {
    if (m == 0) return true;
    if (n == 0)return false;
    if (s[n - 1] == p[m - 1]) return comp(s, p, n - 1, m - 1);
    else return comp(s, p, n - 1, m);
}

void solve(void)
{
    ll nn, s1, s2, e1, e2;
    cin >> nn >> s1 >> s2 >> e1 >> e2;
    string ss;
    cin >> ss;
    int a, b, n = 0, w = 0, e = 0, s = 0;
    a = e1 - s1;
    b = e2 - s2;
    if (a >= 0) e = a;
    else if (a < 0) w = abs(a);
    if (b >= 0) n = b;
    else s = abs(b);
    int i = 0;
    for ( i = 0; i < ss.size(); i++) {
        if (ss[i] == 'N') n--;
        else if (ss[i] == 'W') w--;
        else if (ss[i] == 'S') s--;
        else if (ss[i] == 'E') e--;

        if (s <= 0 && e <= 0 && w <= 0 && n <= 0) {


            print(i + 1);
            return ;
        }

    }
    print("-1");

}
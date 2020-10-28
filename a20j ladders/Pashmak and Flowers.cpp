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
    ll  n;
    cin >> n;
    std::vector<int> v(n);
    for (int i = 0; i < n; i++)cin >> v[i];
    ll maxi = *max_element(v.begin(), v.end());
    ll mini = *min_element(v.begin(), v.end());
    ll maxicount = count(v.begin(), v.end(), maxi);
    ll minicount = count(v.begin(), v.end(), mini);
    cout << maxi - mini << " ";
    if (mini == maxi)
        cout << n * (n - 1) / 2 << endl;
    else
        cout << maxicount*minicount << endl;
}
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

void solve(void)
{
    ll n;
    cin >> n;
    std::vector<int> x(n), y(n);
    int i = 0;
    ll m = n;
    while (n--) {
        cin >> x[i] >> y[i];
        i++;
    }

    ll count = 0;
    for (int i = 0; i < m ; i++) {

        ll u = 0, d = 0, r = 0, l = 0;
        fo(j, 0, m) {

            if (x[j] < x[i] && y[i] == y[j])
                l += 1;
            if (x[j] > x[i] && y[i] == y[j])
                r += 1;
            if (y[j] > y[i] && x[i] == x[j])
                u += 1;
            if (y[j] < y[i] && x[i] == x[j])
                d++;
        }
        if (l > 0 && r > 0 && u > 0 && d > 0) count += 1;
    }
    print(count);

}
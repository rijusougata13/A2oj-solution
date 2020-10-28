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
    string s;
    cin >> s;
    int i = 0;
    vector<int>v;
    while (i < s.size()) {
        if (s[i] == '.') {
            v.push_back(0);
        }
        else if (s[i] == '-' && s[i + 1] == '.') {
            v.push_back(1);
            i += 1;
        }
        else {
            v.push_back(2);
            i += 1;
        }
        i++;
    }
    for (int i = 0; i < v.size(); i++) cout << v[i];
    cout << endl;

}
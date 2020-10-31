/*

                  ░██████╗░█████╗░██╗░░░██╗░██████╗░░█████╗░████████╗░█████╗░
                  ██╔════╝██╔══██╗██║░░░██║██╔════╝░██╔══██╗╚══██╔══╝██╔══██╗
                  ╚█████╗░██║░░██║██║░░░██║██║░░██╗░███████║░░░██║░░░███████║
                  ░╚═══██╗██║░░██║██║░░░██║██║░░╚██╗██╔══██║░░░██║░░░██╔══██║
                  ██████╔╝╚█████╔╝╚██████╔╝╚██████╔╝██║░░██║░░░██║░░░██║░░██║
                  ╚═════╝░░╚════╝░░╚═════╝░░╚═════╝░╚═╝░░╚═╝░░░╚═╝░░░╚═╝░░╚═╝

                                ███████████████████████████
                                ███████▀▀▀░░░░░░░▀▀▀███████
                                ████▀░░░░░░░░░░░░░░░░░▀████
                                ███│░░░░░░░░░░░░░░░░░░░│███
                                ██▌│░░░░░░░░░░░░░░░░░░░│▐██
                                ██░└┐░░░░░░░░░░░░░░░░░┌┘░██
                                ██░░└┐░░░░░░░░░░░░░░░┌┘░░██
                                ██░░┌┘▄▄▄▄▄░░░░░▄▄▄▄▄└┐░░██
                                ██▌░│██████▌░░░▐██████│░▐██
                                ███░│▐███▀▀░░▄░░▀▀███▌│░███
                                ██▀─┘░░░░░░░▐█▌░░░░░░░└─▀██
                                ██▄░░░▄▄▄▓░░▀█▀░░▓▄▄▄░░░▄██
                                ████▄─┘██▌░░░░░░░▐██└─▄████
                                █████░░▐█─┬┬┬┬┬┬┬─█▌░░█████
                                ████▌░░░▀┬┼┼┼┼┼┼┼┬▀░░░▐████
                                █████▄░░░└┴┴┴┴┴┴┴┘░░░▄█████
                                ███████▄░░░░░░░░░░░▄███████
                                ██████████▄▄▄▄▄▄▄██████████
                                ███████████████████████████

*/


#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#define ll long long
#define ul unsigned long long
#define modu 100000000
#define f(i,j, n) for (ll i = j; i < n; i++)
#define fo(i, j, n) for (ll i = j; i >=0; i--)
#define print(x) cout << x << endl
#define gi(x) scanf("%lld",&x)
#define gc(x) scanf("%s",&x)
#define all(o) (o).begin(), (o).end()
using namespace std;



void solve(void);
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

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

struct activity {
    ll  marks, essay;
};

bool activity_compare(activity s1, activity s2) {
    if (s1.essay == s2.essay)
        return s1.marks < s2.marks;
    return s1.essay < s2.essay;
}

ll ncr(ll n, ll k)
{
    ll res = 1;
    if (k > n - k)
        k = n - k;
    for (ll i = 0; i < k; ++i) {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

ll max(ll a, ll b)
{
    return (a > b) ? a : b;
}
ll min(ll a, ll b)
{
    return (a < b) ? a : b;
}



ll k1, k2;
ll dp[101][101][11][11];
ll get( ll n1, ll n2, ll a, ll b) {

    if (n1 + n2 == 0)return 1;
    if (dp[n1][n2][a][b] != -1)return dp[n1][n2][a][b];
    ll x = 0;
    if (n1 > 0 && a > 0)
        x = get( n1 - 1, n2, a - 1, k2);
    ll y = 0;
    if (n2 > 0 && b > 0)
        y = get( n1, n2 - 1, k1, b - 1);

    return dp[n1][n2][a][b] = ((x + y) % modu);
}

void solve(void)
{

    ll n, m;
    cin >> n >> m >> k1 >> k2;

    f(i, 0, n + 1) {
        f(j, 0, m + 1) {
            f(k, 0, k1 + 1) {
                f(l, 0, k2 + 1)
                dp[i][j][k][l] = -1;
            }
        }
    }
    ll ans = get( n, m, k1, k2);
    print(ans);

}


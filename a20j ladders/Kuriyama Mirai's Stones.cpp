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
    ll n;
    cin >> n;
    std::vector<ll> v(n + 1), a(n + 1);
    for (ll i = 1; i <= n; i++) {
        cin >> v[i];
        a[i] = v[i];
    }
    sort(a.begin(), a.end());
    for (ll i = 1; i <= n; i++) v[i] = v[i] + v[i - 1];
    for (ll i = 1; i <= n; i++) a[i] = a[i] + a[i - 1];
    ll q;
    cin >> q;
    while (q--) {
        ll t, l, r;
        cin >> t >> l >> r;

        // if (t == 1) {
        //     if (l == 1) print(v[r - 1]);
        //     else
        //         print(v[r - 1] - v[l - 2]);
        // }
        // else {
        //     if (l == 1) print(a[r - 1]);
        //     else
        //         print(a[r - 1] - a[l - 2]);
        // }
        if (t == 1)
            print ( v[r] - v[l - 1]);
        else
            print ( a[r] - a[l - 1]);
    }


}
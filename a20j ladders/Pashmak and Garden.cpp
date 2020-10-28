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
#define f(i,j, n) for (ll i = j; i < n; i++)
#define fo(i, j, n) for (ll i = j; i >=0; i--)
#define print(x) cout << x << endl
using namespace std;



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

ll max(ll a, ll b)
{
    return (a > b) ? a : b;
}
ll min(ll a, ll b)
{
    return (a < b) ? a : b;
}

std::vector<ll> getDigit(ll n) {
    std::vector<ll> v;
    while (n > 0) {
        if (n % 10 != 0) {
            v.push_back(n % 10);
        }
        n = n / 10;
    }
    return v;
}

struct activity {
    ll id, end, cost;
};

bool activity_compare(activity s1, activity s2) {
    if (s1.cost != s2.cost)
        return (s1.cost > s2.cost);
    return s1.id < s2.id;
}
void solve(void)
{
    ll x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if (x1 != x2 && y2 != y1 && abs(y2 - y1) != abs(x2 - x1)) {

        print(-1);
    }
    else if (x1 != x2 && y1 != y2) {
        cout << x1 << " " << y2 << " " << x2 << " " << y1;
        cout << endl;

    }
    else if (x1 != x2) {
        if (y1 + (x2 - x1) > 1000)
            cout << x1 << " " << y1 + (x1 - x2) << " " << x2 << " " << y2 + (x1 - x2);
        else
            cout << x1 << " " << y1 + (x2 - x1) << " " << x2 << " " << y2 + (x2 - x1);
    }
    else if (y1 != y2) {
        if (x1 + (y2 - y1) > 1000)
            cout << x1 + (y1 - y2) << " " << y1  << " " << x2 + (y1 - y2) << " " << y2 ;
        else
            cout << x1 + (y2 - y1) << " " << y1  << " " << x2 + (y2 - y1) << " " << y2 ;
    }
}
 
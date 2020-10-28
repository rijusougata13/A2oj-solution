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

    ll n;
    cin >> n;
    std::vector<ll> a(n), b(n);
    ll i = 0;
    while (i < n) {
        cin >> a[i] >> b[i];
        i++;
    }
    ll A = 0, B = 0;
    i = 0;
    while (i < n) {
        if (abs((A + a[i]) - B) <= 500) {
            A += a[i];
            cout << "A" << "";
        }

        else if (abs((B + b[i])) - A <= 500) {
            cout << "G" << "";
            B += b[i];
        }
        else {
            print(-1);
            return;
        }
        i++;
    }

}
 
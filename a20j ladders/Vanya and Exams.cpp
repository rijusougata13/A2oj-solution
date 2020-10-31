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
#define modu 1000000007
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

void solve(void)
{
    ll n, r, avg;
    gi(n);
    gi(r);
    gi(avg);
    activity arr[n];
    ll num = 0;
    f(i, 0, n) {
        gi(arr[i].marks);
        gi(arr[i].essay);
        num += arr[i].marks;
        if (arr[i].marks == r)
            arr[i].essay = 1e8;
    }
    sort(arr, arr + n, activity_compare);
    ll ans = 0;
    ll rem = avg * n - num;
    f(i, 0, n) {
        if (rem <= 0) break;
        ll ess = arr[i].essay;
        ll t = min(rem, (r - arr[i].marks));
        rem -= t;
        ans += t * arr[i].essay;
    }
    print(ans);

}
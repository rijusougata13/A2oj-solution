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

	ll a, b, n;
	cin >> a >> b >> n;
	for (ll i = 0; i < 10; i++) {
		if ((a * 10 + i) % b == 0) {
			ll ans = ((a * 10 + i) );
			n = n - 1;
			// while (n--) {
			//     ans = ans * 10;
			// }
			cout << ans ;
			for (int i = 0; i < n ; i++)cout << '0' ;
			cout << endl;
			return;
		}

	}
	print("-1");


}
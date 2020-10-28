#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <string>
#define ll long long
#define modu 1000000007
using namespace std;

int main()
{

    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for (int i = 0; i < s.size(); i++)
    {
        s[i] = tolower(s[i]);
        if (s[i] != 'a' && s[i] != 'o' && s[i] != 'u' && s[i] != 'e' && s[i] != 'y' && s[i] != 'i')
        {
            printf(".%c", s[i]);
        }
    }
    return 0;
}
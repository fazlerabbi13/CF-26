#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    int n = s.size();
    if (s[0] == s[n - 1])
    {
        cout << s << "\n";
    }
    if (s[0] != s[n - 1])
    {
        if (s[0] == 'a')
        {
            s[0] = 'b';
        }
        else
        {
            s[0] = 'a';
        }
        cout << s << "\n";
    }
    
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}
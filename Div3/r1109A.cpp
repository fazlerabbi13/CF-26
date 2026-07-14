#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int current = 0;
    int longest = 0;

    for (auto c : s)
    {
        if (c == '#')
        {
            current++;
            longest = max(longest, current);
        }
        else
        {
            current = 0;
        }
    }
    cout << (longest + 1) / 2 << "\n";
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
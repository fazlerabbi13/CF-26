#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    int zeroCount = 0, oneCount = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0')
        {
            zeroCount++;
        }
        else
        {
            oneCount++;
        }
    }

    int operation = min(zeroCount, oneCount);

    if (operation % 2 == 1)
    {
        cout << "DA" << "\n";
    }
    else
    {
        cout << "NET" << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie();

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}
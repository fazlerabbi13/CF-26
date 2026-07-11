#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll x, n;
    cin >> x >> n;

    ll finalPosition;
    if (n % 4 == 0)
    {
        finalPosition = 0;
    }
    else if (n % 4 == 1)
    {
        finalPosition = -n;
    }
    else if (n % 4 == 2)
    {
        finalPosition = 1;
    }
    else if (n % 4 == 3)
    {
        finalPosition = n + 1;
    }

    if (x % 2 == 0)
    {
        finalPosition = x + finalPosition;
    }
    else
    {
        finalPosition = x - finalPosition;
    }
    cout << finalPosition << "\n";
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
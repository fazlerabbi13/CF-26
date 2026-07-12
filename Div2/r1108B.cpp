#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll n;
    cin >> n;

    if (n == 2)
    {
        cout << -1 << "\n";
        return;
    }

    if (n == 1)
    {
        cout << 1 << "\n";
        return;
    }
    cout << 1 << " " << 2;
    ll x = 3;
    for (ll i = 3; i <= n; i++)
    {
        cout << " " << x;
        x *= 2;
    }
    cout << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}
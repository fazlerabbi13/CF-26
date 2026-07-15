#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll n, x;
    cin >> n >> x;

    vector<ll> a(n);

    ll minimum = 0, maximum = 0;

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];

        minimum += a[i];
        maximum += (a[i] + x - 1) / x;
    }

    minimum = (minimum + x - 1) / x;

    cout << minimum << " " << maximum << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();
}
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> medians(n * k);
    for (ll i = 0; i < n * k; i++)
    {
        cin >> medians[i];
    }

    ll moveFrom = n * k;
    ll sum = 0;
    while (k--)
    {
        moveFrom -= n / 2 + 1;
        sum += medians[moveFrom];
    }
    cout << sum << "\n";
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
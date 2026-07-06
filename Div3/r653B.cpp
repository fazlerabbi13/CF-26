#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll n;
    cin >> n;

    ll countTwos = 0, countThrees = 0;

    while (n > 0 && n % 2 == 0)
    {
        countTwos++;
        n /= 2;
    }
    while (n > 0 && n % 3 == 0)
    {
        countThrees++;
        n /= 3;
    }

    if (n > 1 || countTwos > countThrees)
    {
        cout << -1 << "\n";
    }
    else
    {
        cout << countThrees + (countThrees - countTwos) << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}
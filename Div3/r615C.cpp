#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll n;
    cin >> n;

    ll a = -1, b = -1, c = -1;
    ll temp = n;

    for (ll i = 2; i * i <= temp; i++)
    {
        if (temp % i == 0)
        {
            a = i;
            temp /= i;
            break;
        }
    }

    for (ll i = 2; i * i <= temp; i++)
    {
        if (temp % i == 0 && i != a)
        {
            b = i;
            temp /= i;
            break;
        }
    }

    c = temp;

    if (a != -1 && b != -1 && c != a && c != b && c > 1)
    {
        cout << "YES" << "\n";
        cout << a << " " << b << " " << c << "\n";
    }
    else
    {
        cout << "NO" << "\n";
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
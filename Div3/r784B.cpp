#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;

    bool flag = false;

    ll for_a = 2 * b - c;
    if (for_a / a > 0 && for_a % a == 0)
    {
        flag = true;
    }

    ll for_b = (a + c) / 2;
    if (for_b / b > 0 && for_b % b == 0 && (c - a) % 2 == 0)
    {
        flag = true;
    }

    ll for_c = 2 * b - a;
    if (for_c / c > 0 && for_c % c == 0)
    {
        flag = true;
    }

    if (flag)
    {
        cout << "YES" << "\n";
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
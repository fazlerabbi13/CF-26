#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a > b)
    {
        swap(a, b);
    }
    if (c > d)
    {
        swap(c, d);
    }

    if (c >= a && c <= b && (d <= a || d >= b))
    {
        cout << "YES" << "\n";
        return;
    }
    else if (d >= a && d <= b && (c <= a || c >= b))
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
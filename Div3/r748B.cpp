#include <bits/stdc++.h>
using namespace std;

int minOperation(string n, string targetValue)
{
    int operation = 0;
    int targetValueIndex = targetValue.size() - 1;

    for (int i = n.size() - 1; i >= 0; i--)
    {
        if (targetValueIndex >= 0 && n[i] == targetValue[targetValueIndex])
        {
            targetValueIndex--;
        }
        else
        {
            operation++;
        }

        if (targetValueIndex < 0)
            break;
    }

    if (targetValueIndex >= 0)
        return INT_MAX;

    return operation;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    vector<string> targetValues = {"00", "25", "50", "75"};

    while (t--)
    {
        string n;
        cin >> n;

        int ans = INT_MAX;

        for (const string &targetValue : targetValues)
        {
            ans = min(ans, minOperation(n, targetValue));
        }

        cout << ans << "\n";
    }

    return 0;
}
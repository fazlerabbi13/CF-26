#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;

    vector<int> arr(n - 1);
    for(int i =0; i < n - 1; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != i + 1){
            cout << i + 1 << "\n";
            return 0;
        }
    }
    // if no number is missing then given integer will missed
    cout << n << "\n";
    return 0;
}
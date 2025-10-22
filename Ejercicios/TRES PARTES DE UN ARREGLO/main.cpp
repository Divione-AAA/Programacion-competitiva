#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    int i = 0, j = n - 1;
    long long left_sum = a[i], right_sum = a[j];
    long long ans = 0;
    while (i < j) {
        if (left_sum == right_sum) {
            ans = left_sum;       
            ++i;
            left_sum += a[i];
        } else if (left_sum < right_sum) {
            ++i;
            left_sum += a[i];
        } else {
            --j;
            right_sum += a[j];
        }
    }
    cout<<ans<<endl;
return 0;}
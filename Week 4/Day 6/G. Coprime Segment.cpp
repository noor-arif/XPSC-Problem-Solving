// wrong ans
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> // for std::gcd
#include <climits> // for INT_MAX

using namespace std;

int findShortestGoodSegment(int n, const vector<long long> &a)
{
    // Check if GCD of the entire array is greater than 1
    long long overall_gcd = a[0];
    for (int i = 1; i < n; ++i)
    {
        overall_gcd = gcd(overall_gcd, a[i]);
        if (overall_gcd == 1)
            break;
    }

    if (overall_gcd > 1)
        return -1;

    // Sliding window approach
    int l = 0;
    long long current_gcd = 0;
    int min_length = INT_MAX;

    for (int r = 0; r < n; ++r)
    {
        current_gcd = gcd(current_gcd, a[r]);
        while (current_gcd == 1 && l <= r)
        {
            min_length = min(min_length, r - l + 1);
            l++;
            current_gcd = gcd(a[r], a[l]);
        }
    }

    return min_length == INT_MAX ? -1 : min_length;
}

int main()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    int result = findShortestGoodSegment(n, a);

    cout << result << endl;

    return 0;
}

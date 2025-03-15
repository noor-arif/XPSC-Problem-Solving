#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl '\n'

const int MAXN = 100005;
int segTree[4 * MAXN]; // Segment Tree

// Build Segment Tree
void buildSegmentTree(vector<int> &arr, int node, int start, int end)
{
    if (start == end)
    {
        segTree[node] = arr[start];
    }
    else
    {
        int mid = (start + end) / 2;
        buildSegmentTree(arr, 2 * node, start, mid);
        buildSegmentTree(arr, 2 * node + 1, mid + 1, end);
        segTree[node] = __gcd(segTree[2 * node], segTree[2 * node + 1]);
    }
}

// Query GCD in range [L, R]
int queryGCD(int node, int start, int end, int L, int R)
{
    if (R < start || end < L)
        return 0; // Out of range
    if (L <= start && end <= R)
        return segTree[node]; // Inside range

    int mid = (start + end) / 2;
    int leftGCD = queryGCD(2 * node, start, mid, L, R);
    int rightGCD = queryGCD(2 * node + 1, mid + 1, end, L, R);
    return __gcd(leftGCD, rightGCD);
}

// Find the minimum length segment with GCD = 1
int findMinSegmentWithGCD1(vector<int> &arr, int n)
{
    buildSegmentTree(arr, 1, 0, n - 1);

    int minLength = n + 1; // Large value
    int L = 0;

    for (int R = 0; R < n; R++)
    {
        while (L <= R && queryGCD(1, 0, n - 1, L, R) == 1)
        {
            minLength = min(minLength, R - L + 1);
            L++; // Shrink window
        }
    }

    return (minLength == n + 1) ? -1 : minLength; // Return -1 if no segment found
}

int32_t main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int result = findMinSegmentWithGCD1(arr, n);
    cout << result << endl;

    return 0;
}

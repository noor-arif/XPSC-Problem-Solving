#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<int> v;
int sumOfDigites(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    v.resize(10000000, 0);
    for (int i = 0; i < v.size(); i++)
    {
        v[i + 1] = v[i] + sumOfDigites(i + 1);
    }

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << v[n] << '\n';
    }

    return 0;
}
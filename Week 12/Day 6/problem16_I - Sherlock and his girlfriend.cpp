#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
using namespace std;
typedef long long int ll;
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    vector<int> ans;
    for (int i = 2; i <= n + 1; i++)
    {
        if (isPrime(i))
            ans.push_back(1);
        else
            ans.push_back(2);
    }
    cout << (n < 3 ? 1 : 2) << endl;
    for (auto i : ans)
        cout << i << " ";
    cout << endl;
    return 0;
}
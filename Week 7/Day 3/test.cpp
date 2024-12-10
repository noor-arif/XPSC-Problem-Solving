#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n = 9;
    cout << bitset<8>(n) << '\n'; //binary representation
    cout << __builtin_popcount(n); //count 1 in binary  representation
    return 0;
}
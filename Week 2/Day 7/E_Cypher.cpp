#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            int b;
            cin >> b;
            string s;
            cin >> s;
            int track = a[i];
            for (char ch : s)
            {
                if (ch == 'D')
                {
                    if (track == 9)
                        track = 0;
                    else
                        track++;
                }
                else
                {
                    if (track == 0)
                        track = 9;
                    else
                        track--;
                }
            }
            a[i] = track;
        }
        for (int val : a)
        {
            cout << val << " ";
        }
        cout << '\n';
    }
    return 0;
}
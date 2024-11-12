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
        string a, b;
        cin >> a >> b;
        char ac = a[a.size() - 1], bc = b[b.size() - 1];

        if (a == b)
            cout << "=" << '\n';
        else if (ac == 'L' && bc == 'M')
            cout << ">" << '\n';
        else if (ac == 'M' && bc == 'L')
            cout << "<" << '\n';
        else if (ac == 'M' && bc == 'S')
            cout << ">" << '\n';
        else if (ac == 'S' && bc == 'M')
            cout << "<" << '\n';
        else if (ac == 'L' && bc == 'S')
            cout << ">" << '\n';
        else if (ac == 'S' && bc == 'L')
            cout << "<" << '\n';
        else if (ac == 'L' && bc == 'L')
        {
            int xa = 0, xb = 0;
            for (int i = 0; i < a.size(); i++)
            {
                if (a[i] == 'X')
                    xa++;
            }
            for (int i = 0; i < b.size(); i++)
            {
                if (b[i] == 'X')
                    xb++;
            }
            if (xa > xb)
                cout << ">" << '\n';
            else
                cout << "<" << '\n';
        }
        else if (ac == 'S' && bc == 'S')
        {
            int xa = 0, xb = 0;
            for (int i = 0; i < a.size(); i++)
            {
                if (a[i] == 'X')
                    xa++;
            }
            for (int i = 0; i < b.size(); i++)
            {
                if (b[i] == 'X')
                    xb++;
            }
            if (xa > xb)
                cout << "<" << '\n';
            else
                cout << ">" << '\n';
        }
    }
    return 0;
}
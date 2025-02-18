#include <bits/stdc++.h>
using namespace std;

const int maxN = 1009;
int dx[8] = {1, 0, -1, 0, -1, 1, -1, 1};
int dy[8] = {0, 1, 0, -1, -1, 1, 1, -1};
bool visited[maxN][maxN];
int n;
bool valid(int x, int y)
{
    return (x <= n && x >= 1 && y <= n && y >= 1);
}

void bfs(int kx, int ky)
{
    queue<pair<int, int>> q;
    q.push({kx, ky});
    visited[kx][ky] = true;
    while (!q.empty())
    {
        auto [x, y] = q.front();
        q.pop();
        for (int i = 0; i < 8; i++)
        {
            int Dx, Dy;
            Dx = dx[i] + x;
            Dy = dy[i] + y;
            if (!visited[Dx][Dy] && valid(Dx, Dy))
            {
                visited[Dx][Dy] = true;
                q.push({Dx, Dy});
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int qx, qy, kx, ky, tx, ty;
    cin >> n;
    cin >> qx >> qy;
    cin >> kx >> ky;
    cin >> tx >> ty;
    for (int i = 0; i < 8; i++)
    {
        int Dx, Dy;
        Dx = dx[i] + qx;
        Dy = dy[i] + qy;
        while (valid(Dx, Dy))
        {
            visited[Dx][Dy] = true;
            Dx += dx[i];
            Dy += dy[i];
        }
    }
    bfs(kx, ky);
    if (visited[tx][ty])
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
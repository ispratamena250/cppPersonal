// AtCoder Beginner Contest 300 - Problem C: Cross (https://atcoder.jp/contests/abc300/tasks/abc300_c)
#include <bits/stdc++.h>

using namespace std;
using ii = pair<int, int>;

const vector<ii> dirs { { 1, 1 }, { -1, -1 }, { -1, 1 }, { 1, -1 } };

auto solve(int H, int W, const vector<string>& C)
{
    vector<int> ans(min(H, W) + 1, 0);

    vector<vector<int>> found(H, vector<int>(W, 0));

    for (int i = 0; i < H; ++i)
        for (int j = 0; j < W; ++j)
        {
            if (found[i][j] or C[i][j] == '.')
                continue;

            found[i][j] = 1;
            auto count = 1;

            queue<ii> q;
            q.push(ii(i, j)); 
            
            while (not q.empty())
            {
                auto [x, y] = q.front();
                q.pop();

                for (auto [dx, dy] : dirs)
                {
                    auto u = x + dx, v = y + dy;

                    if (0 <= u and u < H and 0 <= v and v < W and C[u][v] == '#' and not found[u][v])
                    {
                        ++count;
                        found[u][v] = 1;
                        q.push(ii(u, v));
                    }
                }
            }

            auto size = (count - 1)/4;
            ans[size]++;
        }

    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int H, W;
    cin >> H >> W;

    vector<string> C(H);

    for (int i = 0; i < H; ++i)
        cin >> C[i];

    auto ans = solve(H, W, C);

    for (size_t i = 1; i < ans.size(); ++i)
        cout << ans[i] << (i + 1 == ans.size() ? '\n' : ' ');

    return 0;
}

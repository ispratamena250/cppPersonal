// AtCoder Beginner Contest 300 - Problem B: Same Map in the RPG World (https://atcoder.jp/contests/abc300/tasks/abc300_b)
#include <bits/stdc++.h>

using namespace std;

auto shift(int H, int W, int r, int s, const vector<string>& A)
{
    vector<string> res(H, string(W, ' '));

    for (int i = 0; i < H; ++i)
        for (int j = 0; j < W; ++j)
            res[(i + r) % H][(j + s) % W] = A[i][j];

    return res;
}

auto solve(int H, int W, const vector<string>& A, const vector<string>& B)
{
    for (int r = 0; r < H; ++r)
        for (int s = 0; s < W; ++s)
            if (shift(H, W, r, s, A) == B)
                return "Yes";

    return "No";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int H, W;
    cin >> H >> W;

    vector<string> A(H), B(H);

    for (int i = 0; i < H; ++i)
        cin >> A[i];

    for (int i = 0; i < H; ++i)
        cin >> B[i];

    cout << solve(H, W, A, B) << '\n';

    return 0;
}

// AtCoder Beginner Contest 300 - Problem A: N-choice question (https://atcoder.jp/contests/abc300/tasks/abc300_a)
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, A, B;
    cin >> N >> A >> B;

    auto C = A + B;

    for (int i = 1; i <= N; ++i)
    {
        int x;
        cin >> x;

        if (x == C)
        {
            cout << i << '\n';
            break;
        }        
    }

    return 0;
}

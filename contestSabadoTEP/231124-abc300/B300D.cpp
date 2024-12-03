// AtCoder Beginner Contest 300 - Problem D: AABCC (https://atcoder.jp/contests/abc300/tasks/abc300_d)
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int MAX { 1'000'010 };
bitset<MAX> sieve;
vector<ll> ps;

void precomp()
{
    ps.emplace_back(2);
    ps.emplace_back(3);

    for (ll i = 5, step = 2; i < MAX; i += step, step = 6 - step)
    {
        if (not sieve[i])
        {
            ps.emplace_back(i);

            for (ll j = i * i; j < MAX; j += 2*i)
                sieve[j] = true;
        }
    } 
}

auto solve(ll N)
{
    auto M = ps.size();
    ll ans = 0;

    for (size_t i = 0; i < M; ++i)
    {

        if (N / (ps[i] * ps[i]) <= 1)
            break;

        auto x = ps[i] * ps[i];

        for (size_t j = i + 1; j < M; ++j)
        {
            if (N / (x * ps[j]) <= 1)
                break;

            auto y = x * ps[j];

            for (size_t k = j + 1; k < M; ++k)
            {
                if (N / y / (ps[k] * ps[k]) < 1)
                    break;

                ++ans;
            }
        }
    }

    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    precomp();

    ll N;
    cin >> N;

    cout << solve(N) << '\n';

    return 0;
}

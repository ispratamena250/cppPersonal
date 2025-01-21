#include <bits/stdc++.h>

using namespace std;
using ii = pair<long long, long long>;
const long long p1 { 31 }, p2 { 29 }, q1 { 1000000007 }, q2 { 1000000009 };

//Assinaturas
size_t rabin_karp(const string& S, const string& P);
ii h(const string& s, size_t size);
long long hi(const string& s, long long pi, long long qi, size_t size);
int f(char c);
ii update(const ii& hs, const string& S, size_t i, size_t m);
long long fast_mod_pow(long long a, long long n, long long q);

int main(){
    cout << rabin_karp("ababababababa", "aba") << '\n';

    return 0;
}

size_t rabin_karp(const string& S, const string& P){
    size_t n = S.size(), m = P.size(), occ = 0;
    auto hs = h(S, m), hp = h(P, m);

    for (size_t i = 0; i < n - m + 1; ++i){
        occ += (hs == hp) ? 1 : 0;

        if (i != n - m)
            hs = update(hs, S, i, m);
    }

    return occ;
}

ii h(const string& s, size_t size) { return { hi(s, p1, q1, size), hi(s, p2, q2, size) }; }

long long hi(const string& s, long long pi, long long qi, size_t size){
    long long ans = 0;

    for (int i = (int) size - 1; i >= 0; i--){
        ans = (ans * pi) % qi;
        ans = (ans + f(s[i])) % qi;
    }

    return ans;
}

int f(char c) { return c - 'a' + 1; }

ii update(const ii& hs, const string& S, size_t i, size_t m){
    auto [x, y] = hs;

    x = (x - f(S[i]) + q1) % q1;
    x = (x * fast_mod_pow(p1, q1 - 2, q1)) % q1;
    x = (x + f(S[i + m]) * fast_mod_pow(p1, m - 1, q1)) % q1;

    y = (y - f(S[i]) + q2) % q2;
    y = (y * fast_mod_pow(p2, q2 - 2, q2)) % q2;
    y = (y + f(S[i + m]) * fast_mod_pow(p2, m - 1, q2)) % q2;

    return { x, y };
}

long long fast_mod_pow(long long a, long long n, long long q){
    long long res = 1, base = a;

    while (n){
        if (n & 1)
            res = (res * base) % q;

        base = (base * base) % q;
        n >>= 1;
    }

    return res;
}

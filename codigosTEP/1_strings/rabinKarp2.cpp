#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const ll p { 31 }, q { 1000000007 };

//Assinaturas
int rabin_karp(const string& S, const string& P);
int h(const string& s, int size);
int f(char c); 
ll fast_mod_pow(ll a, ll n);

int main(){
    cout << rabin_karp("ababababababa", "aba") << '\n';

    return 0;
}

int rabin_karp(const string& S, const string& P){
    int n = S.size(), m = P.size(), occ = 0, hs = h(S, m), hp = h(P, m);

    for (int i = 0; i < n - m + 1; ++i){
        occ += (hs == hp && S.substr(i, m) == P) ? 1 : 0;

        if (i != n - m){
            hs = (hs - f(S[i]) + q) % q;
            hs = (hs * fast_mod_pow(p, q - 2)) % q;
            hs = (hs + f(S[i + m]) * fast_mod_pow(p, m - 1)) % q;
        }
    }

    return occ;
}

int h(const string& s, int size){
    ll ans = 0;

    for (int i = size - 1; i >= 0; i--){
        ans = (ans * p) % q;
        ans = (ans + f(s[i])) % q;
    }

    return ans;
}

int f(char c) { return c - 'a' + 1; }

ll fast_mod_pow(ll a, ll n){
    ll res = 1, base = a;

    while (n){
        if (n & 1)
            res = (res * base) % q;

        base = (base * base) % q;
        n >>= 1;
    }

    return res;
}



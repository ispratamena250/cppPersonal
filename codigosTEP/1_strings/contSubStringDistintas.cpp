#include <bits/stdc++.h>

using namespace std;
using ll = long long;
constexpr ll p = 31, q = 1'000'000'007;

//Assinaturas
int unique_substrings(const string& s);
vector<ll> prefixes(const string& s);
int h(const string& s);
vector<ll> inverses(ll N);
ll fast_exp_mod(ll a, ll n);
int f(char c);
int h(int i, int j, const vector<ll>& ps, const vector<ll>& is);

int main(){
    cout << unique_substrings("tep") << endl;
    cout << unique_substrings("banana") << endl;
    cout << unique_substrings("aaaaa") << endl;
    cout << unique_substrings("teste teste") << endl;

    return 0;
}

int unique_substrings(const string& s){
    set<ll> hs;
    int N = s.size();

    auto ps = prefixes(s);
    auto is = inverses(s.size());

    for (int i = 0; i < N; ++i){
        for (int j = i; j < N; ++j){
            auto hij = h(i, j, ps, is);
	    //cout << "Aqui: " << hij << endl;
            hs.insert(hij);
        }
    }

    return hs.size();
}

vector<ll> prefixes(const string& s){
    int N = s.size();
    vector<ll> ps(N, 0);

    for (int i = 0; i < N; ++i)
        ps[i] = h(s.substr(0, i + 1));

    return ps;
}

int h(const string& s){ //Hash
    ll ans = 0;

    for (auto c : s){
        ans = (ans * p) % q;
        ans = (ans + f(c)) % q;
    }

    return ans;
}

int f(char c){
    return c - 'a' + 1;
}

vector<ll> inverses(ll N){
    vector<ll> is(N);
    ll base = 1;

    for (int i = 0; i < N; ++i){
        is[i] = fast_exp_mod(base, q - 2);
        base = (base * p) % q;
    }

    return is;
}

ll fast_exp_mod(ll a, ll n){
    ll res = 1, base = a;

    while (n) {
        if (n & 1)
            res = (res * base) % q;

        base = (base * base) % q;
        n >>= 1;
    }

    return res;
}

int h(int i, int j, const vector<ll>& ps, const vector<ll>& is){
    auto diff = i ? ps[j] - ps[i - 1] : ps[j];
    diff = (diff * is[i]) % q;

    return (diff + q) % q;
}

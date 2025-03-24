#include <bits/stdc++.h>

using namespace std;
using ll = long long;

pair<int, int> h(const string& s);
int hi(ll pi, ll qi, const string& s);
int f(char c);

int main(){
	string s;

	cin >> s;

	auto [h1, h2] = h(s);

	cout << "(" << h1 << ", " << h2 << ")\n";

	cout << endl;
	return 0;
}

pair<int, int> h(const string& s){
	constexpr ll p1 = 31, q1 = 1000000007;
	constexpr ll p2 = 29, q2 = 1000000009;

	return {hi(p1, q1, s), hi(p2, q2, s)};
}

int hi(ll pi, ll qi, const string& s){
	ll ans = 0;

	for(auto c : s){
		ans = (ans * pi) % qi;
		ans = (ans + f(c)) % qi;
	}

	return ans;
}

int f(char c){
	return c - 'a' + 1;
}

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int h(const string& s);
int f(char c);

int main(){
	string s;

	cin >> s;

	cout << h(s) << endl;

	cout << endl;
	return 0;
}

int h(const string& s){
	ll ans = 0, p = 31, q = 1000000007;

	for(auto c : s){
		ans = (ans * p) % q;
		ans = (ans + f(c)) % q;
	}

	return ans;
}

int f(char c){
	return c - 'a' + 1;
}

#include <bits/stdc++.h>

using namespace std;

int occ(const string& p, const string& s);

int main(){
	string s = "azul, azul, azul pascal";
	string p = "azul";

	cout << occ(p, s) << endl;

	cout << endl;
	return 0;
}

int occ(const string& p, const string& s){
	int m = p.size();
	int n = s.size();
	int z = 0;

	for(int i=0; i<=n-m; i++){
		z += (p == s.substr(i, m) ? 1 : 0);
		cout << "String: " << s.substr(i, m) << endl;
	}

	return z;
}

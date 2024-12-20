#include <bits/stdc++.h>

using namespace std;

int occurrences(const string& p, const string& s);

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string s, aux="codeforces";
	int t;
	cin >> t;

	for(int i=0; i<t; i++){
		cin >> s;
		if(occurrences(s, aux) > 0){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}

	return 0;
}
	
int occurrences(const string& p, const string& s){
	int m = p.size();
	int n = s.size();
	int occ=0;

	for(int i=0; i<n-m+1; i++){
		occ += (p == s.substr(i, m) ? 1 : 0);
	}

	return occ;
}

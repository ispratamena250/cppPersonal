#include <bits/stdc++.h>

using namespace std;

int main(){
	vector<int> x, y;
	int n, p, q;
	set<int> s;

	cin >> n >> p;
	vector<int> ans(n), ans_s;

	for(int i=0; i<p; i++){
		int aux;
		cin >> aux;
		x.push_back(aux);
	}

	cin >> q;
	for(int i=0; i<q; i++){
		int aux;
		cin >> aux;
		y.push_back(aux);
	}
	
	for(int i=0; i<p; i++)
		s.insert(x.at(i));
	
	for(int i=0; i<q; i++)
		s.insert(y.at(i));

	for(size_t i=0; i<ans.size(); i++){
		ans_s.push_back(s[i]); //Set não tem indice
	}
	
	iota(ans.begin(), ans.end(), 1);

	ans == ans_s ? cout << "I become that guy." : cout << "Oh, my keyboard!" << endl;

	cout << endl;
	return 0;
}

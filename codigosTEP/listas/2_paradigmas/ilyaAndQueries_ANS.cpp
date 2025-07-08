#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
	string s;
	int m;

	cin >> s >> m;

	vector<int> ps(s.size()+1, 0);

	for(size_t i=1; i<s.size(); i++)
		ps[i+1] = ps[i] + (s.at(i) == s.at(i-1));

	while(m--){
		int l, r;
		cin >> l >> r;
		cout << ps.at(r) - ps.at(l) << endl;
	}

	cout << endl;
	return 0;
}


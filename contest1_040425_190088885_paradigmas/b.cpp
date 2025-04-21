#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, aux;

	cin >> n;
	vector<int> v, per;

	for(int i=0; i<n; i++){
		cin >> aux;
		v.push_back(aux);
	}

	for(int i=1; i<=n; i++){
		per.push_back(i);
	}

	sort(v.begin(), v.end());

	v == per ? cout << "Yes" : cout << "No";

	cout << endl;
	return 0;
}

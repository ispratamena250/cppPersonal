#include <bits/stdc++.h>

using namespace std;

int main(){
	vector<int> v;
	int n, count=1;

	cin >> n;

	for(int i=0; i<n; i++){
		int aux;
		cin >> aux;
		v.push_back(aux);
	}

	for(int i=0; i<n; i++){
		if(v[i] < v[i+1])
			count++;
	}	

	count == n ? cout << "Yes" : cout << "No" << endl;

	cout << endl;
	return 0;
}

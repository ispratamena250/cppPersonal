#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, a, b, aux=0;

	cin >> n >> a >> b;
	vector<int> v(n);

	for(int i=0; i<n; i++){
		cin >> v[i];
	}

	for(int i=0; i<n; i++){
		if(v[i] == a+b){
			aux = i;
		}
	}

	cout << aux+1 << endl;

	return 0;
}

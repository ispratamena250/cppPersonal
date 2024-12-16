#include <bits/stdc++.h>

using namespace std;

int main(){
	size_t count=0;
	int aux;
	vector<int> v(3);

	for(size_t i=0; i<3; i++){
		cin >> aux;
		v[i] = aux;
	}
	for(size_t i=1; i<=3; i++){
		if(count%i == 0){
			cout << v[i] << endl;
		}
	}

	return 0;
}

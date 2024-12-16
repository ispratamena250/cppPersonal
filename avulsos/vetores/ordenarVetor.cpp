#include <bits/stdc++.h>

using namespace std;

int main(){
	int a;
	cin >> a;
	vector<int> v(a);
	vector<int> v2(a);

	for(int i=0; i<a; i++){
		cin >> v[i];
	}
	
	for(int i=0; i<a; i++){
		for(int j=0; j<a; j++){
			if(v[j] < v[j]){
				v2[j] = v[i];	
			}
		}	
	}

	for(int i=0; i<a; i++){
		cout << v2[i] << " ";
	}
	cout << endl;

	return 0;
}

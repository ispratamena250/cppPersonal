#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	char m[a][b];

	for(int i=0; i<a; i++){
		for(int j=0; j<b; j++){
			cin >> m[i][j];
		}
	}

	for(int i=0; i<a; i++){
		cout << endl;
		for(int j=0; j<b; j++){
			cout <<  m[i][j];
		}
	}
	cout << endl;

	return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, count=0, ans=0;

	cin >> n;
	int mx[n][3];

	for(int i=0; i<n; i++){
		for(int j=0; j<3; j++){
			int aux;
			cin >> aux;
			mx[i][j] = aux;
		}
	}

	for(int i=0; i<n; i++){
		for(int j=0; j<3; j++){
			if(j < 3){ count += mx[i][j]; }
			if(j == 2 and count > 1){ ans++; }
			if(j == 2){ count=0; }
		}
	}
	
	cout << ans << endl;

	cout << endl;
	return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, r;
	cin >> n >> r;

	int m[n][2];
	
	for(int i=0; i<n; i++){
		for(int j=0; j<2; j++){
			cin >> m[i][j];
		}
	}

	for(int i=0; i<n; i++){
		for(int j=0; j<2; j++){
			if(i == 2 && (r >= 1200 || r <= 2399)){
				cout << "r sem " << r << endl;
				r += m[2][j];
				cout << m[2][j] << endl;
				cout << "r com " << r << endl;
			}else if(i == 1 && (r >= 1600 || r <= 2799)){
				cout << "r sem " << r << endl;
				r += m[1][j];
				cout << m[1][j] << endl;
				cout << "r com " << r << endl;
			}
		}
	}
	cout << r << endl;
	
	return 0;
}

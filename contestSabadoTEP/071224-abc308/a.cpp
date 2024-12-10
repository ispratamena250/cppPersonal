#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, t, v, count=0, aux;

	cin >> n;
	int m[n][2];
	for(int i=0; i<n; i++){
		for(int j=0; j<2; j++){
			cin >> m[i][j];
		}
	}	
	
	for(int i=0; i<n; i++){
		for(int j=0; j<2; j++){
			count = i;
			if(count == i){
				count = m[count][j];
			}
		}
	}

	return 0;
}

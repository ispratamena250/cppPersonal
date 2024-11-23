#include <bits/stdc++.h>

using namespace std;

int main(){
	int h, w, aux1=0, aux2=0;
	cin >> h >> w;
	char a[h][w], b[h][w];
	vector<int> v1(h);
	vector<int> v2(h);
	vector<int> va1(h);
	vector<int> va2(h);

	//Lendo matrizes
	for(int i=0; i<h; i++){
		for(int j=0; j<w; j++){
			cin >> a[i][j];
		}
	}	
	for(int i=0; i<h; i++){
		for(int j=0; j<w; j++){
			cin >> b[i][j];
		}
	}
	
	//Checando #
	for(int i=0; i<h; i++){
		for(int j=0; j<w; j++){
			if(a[i][j] == '#'){
				aux1++;
			}	
			v1[i] = aux1;
		}
		aux1 = 0;
	}
	for(int i=0; i<h; i++){
		for(int j=0; j<w; j++){
			if(b[i][j] == '#'){
				aux2++;
			}
			v2[i] = aux2;
		}
		aux2 = 0;
	}

	//Printando vetores
	for(int i=0; i<h; i++){
		cout << v1[i] << " ";
	}
	cout << endl;
	for(int i=0; i<h; i++){
		cout << v2[i] << " ";
	}
	cout << endl;

	//Sorting
	sort(v1.begin(), v1.end());
	for(auto x : v1)
		cout << x << " ";
	cout << endl;
	sort(v2.begin(), v2.end());
	for(auto y : v2)
		cout << y << " ";
	cout << endl;

	///
	
	
	return 0;
}

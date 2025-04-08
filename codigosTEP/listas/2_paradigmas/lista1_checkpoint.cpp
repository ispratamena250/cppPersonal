#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m;

	cin >> n >> m;
	int mx1[n][n];
	int mx2[m][m];
	vector<int> v1, v2, ans;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			int aux;
			cin >> aux;
			mx1[i][j] = aux;
			v1.push_back(mx1[i][j]); //Que se foda a multidimencionalidade
		}
	}

	for(int i=0; i<m; i++){
		for(int j=0; j<m; j++){
			int aux;
			cin >> aux;
			mx2[i][j] = aux;
			v2.push_back(mx2[i][j]); //Que se foda a multidimencionalidade
		}
	}

	cout << v1.size() << " " << v2.size() << endl << endl;

	int par=0;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(i % 2){
				cout << v1.at(par) << " " << v2.at(par) << endl;
				par += 2;
			}
		}
	}

	cout << endl;
	for(auto e : v1)
		cout << e << " ";

	cout << endl;
	for(auto e : v2)
		cout << e << " ";

	cout << endl << endl;
	iota(ans.begin(), ans.end(), 1);
	for(auto e : ans)
		cout << e << " ";

	cout << endl;
	return 0;	
}

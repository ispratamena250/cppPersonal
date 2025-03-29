//Tiro ao alvo
#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int c, t, p=0;
	vector<int> raios;

	cin >> c >> t;
	int m[2][t];

	for(long long int i=0; i<c; i++){ //Vetor de raios
		int aux;
		cin >> aux;
		raios.push_back(aux);
	}

	for(long long int i=0; i<2; i++){ //Matriz
		for(long long int j=0; j<t; j++){
			int aux;
			cin >> aux;
			m[i][j] = aux;
		}
	}

	for(long long int i=0; i<2; i++){ //Matriz
		for(long long int j=0; j<t; j++){ 
			for(long long int k=0; k<c; k++){ //Vetor de raios
				if((m[0][j] <= raios[k] and m[0][j] >= (-1)*raios[k]) and (m[1][j] <= raios[k] and m[1][j] >= (-1)*raios[k])){ //Coordenada 
					p++;
				}
			}
		}
	}

	cout << p << endl;

	cout << endl;
	return 0;
}

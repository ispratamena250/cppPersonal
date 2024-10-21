#include <iostream>
#include <vector>
//#include <bits/stdc++.h> //Uma biblioteca que inclui todas as bibliotecas padrao do C++
#include <cstdlib>
using namespace std;

int main(){
	srand(time(NULL));
	vector<int> vetor(5);

	for(int i=0; i<5; i++){
		//vetor.push_back() = rand() % 10; //Errado
		//cin >> vetor >> rand() % 10; //Errado
		vetor[i] = rand() % 10;
	}

	for(int i=0; i<5; i++){
		cout << vetor[i] << " ";
	}
	cout << endl;

	return 0;
}

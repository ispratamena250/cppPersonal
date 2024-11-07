#include <iostream>
#include <string>
#include <vector>
//#include <bits.stdc++.h>

using namespace std;

int main(){
	string nome;
	int quant=0, len;
	vector<int> v(10);

	cin >> nome;
	len = nome.size();

	for(int i=0; i<10; i++){
		v[i] = i;
	}

	for(int i=0; i<=len; i++){
		for(int j=0; i<10; j++){
			if(nome[i] == v[j]){
				quant++;
			}
		}
	}
	cout << "Quant: " << quant-1 << endl;

	return 0;
}

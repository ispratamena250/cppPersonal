#include <iostream>
#include <string>
#include <vector>
//#include <bits.stdc++.h>

using namespace std;

int main(){ //aldfjalkdfj7498247
	string nome;
	int quant=0, len, count=0;

	cin >> nome;
	len = nome.size();
	vector<int> v(len);

	//Vetor cíclico
	for(int i=0; i<len; i++){ 
		if(i == 0){
			v[i] = count;
		}else if(i >= 1){
			if(count < 9){
				count++;
				v[i] = count; 
			}else{
				count = 0;
				v[i] = count;
			}
		}
	}

	//Conta a quantidade de letras entre a string e o vetor
	for(int i=0; i<len; i++){
		for(int j=0; j<len; j++){
			cout << v[j] << " ";
			if(nome[i] == ('0' + v[j])){
				cout << "\tEsse:" << nome[i] << endl;
				quant++;
			}
		}
		cout << endl;
	}
	cout << quant << endl;
	/*
	if((quant - len) < 0){
		cout << "Quant: " << (quant - len)*(-1) << endl;
	}else{
		cout << "Quant: " << quant-len << endl;
	}*/

	return 0;
}

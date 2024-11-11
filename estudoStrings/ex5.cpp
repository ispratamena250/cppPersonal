#include <iostream>
#include <string>
#include <vector>
//#include <bits.stdc++.h>

using namespace std;

int main(){ 
	string nome;
	int quant=0, len/*, count=0*/;

	cin >> nome;
	len = nome.size();
	vector<int> v(len);

	/*
	//Vetor cíclico (não necessário)
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
	}*/
	for(int i=0; i<len; i++){
		v[i] = i;
	}

	//Conta a quantidade de letras entre a string e o vetor
	for(int i=0; i<len; i++){
		for(int j=0; j<len; j++){
			if(nome[i] == ('0' + v[j])){
				//cout << "\tEsse:" << nome[i] << "\t" << v[j] << endl;
				quant++;
			}
		}
	}
	if(len > quant){
		cout << len - quant << endl;
	}else{
		cout << (len - quant)*(-1) << endl;
	}

	return 0;
}

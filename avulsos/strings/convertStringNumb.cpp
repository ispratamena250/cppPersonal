/*
 * Em C++, também é possível tratar um vetor de string com elementos inteiros normalmente
 * */

#include <iostream>
#include <string>

using namespace std;

int main(){
	string s(5, ' ');

	for(int i=0; i<5; i++){
		cin >> s[i];
	}	

	for(int i=0; i<5; i++){ //Converte string em números
		s[i] -= '0';
	}
	
	for(int i=0; i<5; i++){
		cout << s[i] << " ";
	}
	cout << endl;

	return 0;
}

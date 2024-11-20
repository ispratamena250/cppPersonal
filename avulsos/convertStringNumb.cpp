/*
 * Em C++, também é possível tratar um vetor de string com elementos inteiros normalmente
 * */

#include <iostream>
#include <string>

using namespace std;

int main(){
	string s;

	for(int i=0; i<5; i++){
		cin >> s[i];
	}	

	for(int i=0; i<5; i++){
		s[i] += 1;
	}
	
	for(int i=0; i<5; i++){
		cout << s[i] << " ";
	}
	cout << endl;

	return 0;
}

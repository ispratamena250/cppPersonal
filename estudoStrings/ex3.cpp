#include<iostream>
#include <string>

using namespace std;

int main(){
	string nome;

	cin >> nome;

	if(nome[0] == 'a' || nome[0] == 'A'){
		cout << nome << endl;
	}

	return 0;
}

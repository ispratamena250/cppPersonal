#include <iostream>

using namespace std;

int main(){
	string s, s2;
	//char s[] = "teste"; //Declara um vetor de  caracteres
	//string s("teste"); //Declara uma string completa
	//string s(5, 'a'); //Insere em 's' 5 caracteres 'a'
	//cout << sizeof(s) << endl;
	//cout << s << endl;
	
	cout << "Enter first string: ";
	cin >> s;
	cout << s << endl;

	cout << "Enter second string: ";
	getline(cin, s2); //Aparentemente não funcionou
	cout << s2 << endl;

	return 0;
}

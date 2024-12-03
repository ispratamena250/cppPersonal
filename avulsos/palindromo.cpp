/*
* Progama para verificaçaõ de palíndromo em string
*/
#include <iostream>

using namespace std;

//Assinatura
bool is_palindrome(const string& s); //Veja como a assinatura de funções em C++ é diferente do C

int main(int argc, char *argv[]){
	if(argc != 2){
		cout << "Erro! Compile assim: $ ./palindromo s" << endl;
		exit(1);
	}

	string s = argv[1];
	
	if(is_palindrome(s)){
		cout << "p" << endl;
	}else{
		cout << "np" << endl;
	}

	return 0;
}

bool is_palindrome(const string& s){
	size_t N = s.size();

	for(size_t i=0; i<N/2; i++){
		if(s[i] != s[N - 1 - i])
			return false;
	}

	return true;
}

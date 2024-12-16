/*Cria um vetor e passa todos os seus valores para char e compara com indices de uma string
 *Bons exemplos: "abc123def456ghi" e "adjfadf87ad697".
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char* argv[]){
	string s; 
	int count=0, len, countv=0;

	if(argc != 2){
		cout << "Erro! Compile assim: $ ./inteiroString s" << endl;
		exit(1);
	}
	s = argv[1];

	len = s.size();
	cout << "Tamanho de s: " << len << endl;
	vector<int> v(len);

	for(int i=0; i<len; i++){
		v[i] = i;
		countv++;
	}
	cout << "Vetor v: ";
	for(int i=0; i<len; i++){
		cout << v[i] << " ";
	}
	cout << endl << "Tamanho de v: " << countv << endl;

	for(int i=0; i<len; i++){
		for(int j=0; j<len; j++){
			if(s[i] == '0' + v[j]){ //f(s[i] == to_string(v[i]) //(Errado)
				cout << "s[i]:" << s[i] << "\tv[j]:" << v[j] << "\ti:" << i << "\tj:" << j << endl; 
				count++;
			}
		}	
	}
	cout << count << endl;

	return 0;
}

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
	map<char, int> m = {{'a', 1}, {'b', 2}, {'c', 3}, {'d', 4}, {'e', 5}};
	string substring = "ab";

	for(char c : substring){
		if(m.count(c)){
			cout << "Econtrado: " << c << " -> " << m[c] << endl; 
		}else{
			cout << "Caractere " << c << " não encontrado" << endl;
		}
	}

	return 0;
}

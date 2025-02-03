/*
* Código que implementa um histograma de strings em C++
*/

#include <iostream>
#include <string>
#include <map>
//#include <bits/stdc++.h>

using namespace std;

//Assinatura
map<char, int> hist(const string& s);

int main(int argc, char* argv[2]){
	/*if(argc != 2){
		cout << "Erro! Compile assim: $ ./histograma s" << endl;
		exit(1);
	}*/

	//string s = argv[1];
  string s = "c a s a";
	cout << s << endl;
	//hist(s); //Errado
	//cout << hist(s) << endl; //Errado
	map<char, int> h = hist(s);
	for(const auto& c : h)
		cout << c.first << ":" << c.second << endl;

	return 0;
}

map<char, int> hist(const string& s){
	map<char, int> h;

	for(auto c : s)
		++h[c];

	return h;
}

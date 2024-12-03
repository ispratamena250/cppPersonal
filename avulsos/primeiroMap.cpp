#include <iostream>
#include <map>
//#include <bits/stdc++.h>

using namespace std;

int main(){
	map<string, int> idade;

	idade["Ana"] = 25;
	idade["Guilherme"] = 30;
	idade["Joao"] = 15;

	cout << "Idade do Joao: " << idade["Joao"] << endl;
	
	for(const auto& elements : idade){
		cout << elements.first << " tem " << elements.second << " anos!" << endl;
	}

	if(idade.count("Joao")){
		cout << "Joao ta no mapa" << endl;
	}else{
		cout << "Joao nao ta no mapa" << endl;
	}

	return 0;
}

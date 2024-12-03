#include <iostream>
#include <string>
#include <map>
//#include <bits/stdc++.h>

using namespace std;

int main(){	
	map<string, int> idade = {{"Joao", 32}, {"Carla", 20}, {"Ana", 16}};
	int index = 1;
	int current = 0;

	for(const auto& e : idade){
		if(current == index){
			cout << "Indice:" << index << " " << e.first << "," << e.second << endl;
			break;
		}
		++current;
	}

	return 0;
}

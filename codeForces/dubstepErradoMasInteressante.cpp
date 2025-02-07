/*
* Programa que lê uma string, faz um map e depois apaga as ocorrências desejadas
*/
#include <iostream>
#include <string>
#include <map>
//#include <bits/stdc++.h>

using namespace std;

//Assinatura
map<char, int>histograma(const string& s);

int main(){ //WUBWEWUBAREWUBWUBTHEWUBCHAMPIONSWUBMYWUBFRIENDWUB
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;
	cin >> s;

	string substring = "WUB";

	map<char, int> h = histograma(s);
	for(char c : substring){
		if(h.count(c)){
			h.erase('W');
			h.erase('U');
			h.erase('B');
		}
	}
	for(const auto& e : h){
		cout << e.first;
	}
	cout << endl;	

	return 0;
}

map<char, int> histograma(const string& s){
	map<char, int> h;

	for(auto c : s)
		++h[c];

	return h;
}

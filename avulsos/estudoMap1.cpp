#include <iostream>
#include <map>
#include <string>
//#include <bits/stdc++.h>

using namespace std;

int main(){
	map<string, int> mapa;
	string s;

	for(size_t i=1; i<6; i++){
		cin >> s;
		mapa[s] = i;
	}

	map<string, int>::iterator it = mapa.begin();	
	while(it != mapa.end()){
		cout << it->first << " " << it->second << endl;
		++it;
	}
	cout << mapa.size() << endl;	
	cout << mapa.max_size() << endl;	

	return 0;
}

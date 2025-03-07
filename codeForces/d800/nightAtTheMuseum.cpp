#include <iostream>
#include <string>

using namespace std;

int main(){
	string s, alfa1, alfa2;
	char start = 'a';

	cin >> s;

	//Gerando
	for(int i=start; i<='z'; i++){
		alfa1.push_back(i);
	}
	for(int i='z'; i>=start; i--){
		alfa2.push_back(i);
	}

	int count=1;
	for(auto e : alfa1){
		cout << e << count << " "; //horarios
		count++;
	}
	cout << endl;
	count=26;
	for(auto e : alfa2){
		cout << e << count << " "; //anti horario
		count--;
	}
	cout << endl;

	for(size_t i=0; i<s.size(); i++){
		int count=1;
		for(auto e : alfa1){
			if(s[i] == e){
				cout << "h  -> " << s[i] << count << endl;
			}
			count++;
		}
		count=26;
		for(auto f : alfa2){
			if(s[i] == f){
				cout << "ah -> " << s[i] << count << endl;
			}
			count--;
		}			
	}

	//cout << p2 - p1 << endl; //Aqui

	//cout << p1 + (26 - p2) << endl; //Aqui

	cout << endl;
	return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main(){
	string s;
	int aux;

	cin >> s;
	aux = s.size();

	for(int i=0; i<aux; i++){
		s[i] = s[i+'1'];
	}

	for(int i=0; i<aux; i++){
		cout << s[i];
	}
	cout << endl;

	return 0;
}

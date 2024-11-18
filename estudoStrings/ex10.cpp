#include <iostream>
#include <string>

using namespace std;

int main(){
	string s;
	int len, count;

	//cin >> s;
	getline(cin, s); //Lê toda a linha, incluindo espaços
	len = s.size();
	count = s.size();

	for(int i=0; i<len; i++){
		cout << s[count-1];
		count--; 
	}
	cout << endl;

	return 0;
}

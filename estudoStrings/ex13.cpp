#include <iostream>
#include <string>

using namespace std;

int main(){
	string s;
	int count=0, aux;

	getline(cin, s);
	aux = s.size();

	for(int i=0; i<aux; i++){
		if(s[i] == ' '){
			count++;
		}
	}
	cout << count << endl;

	return 0;
}

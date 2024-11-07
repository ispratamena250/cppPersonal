#include <iostream>
#include <string>

using namespace std;

int main(){
	string nome;
	int len;

	cin >> nome;
	len = nome.size();

	for(int i=0; i<=len; i++){
		if(i <= 3){
			cout << nome[i];
		}
	}
	cout << endl;

	return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main(){
	int aux=0, tam;

	string s;
	cin >> s;

	tam = s.size();
	for(int i=0; i<tam; i++){
		if(i==0){
			if(s[aux] == 'W' && s[aux+1] == 'U' && s[aux+2] == 'B'){
				cout << s[i];
				aux = aux+3;
				cout << aux << endl;
			}
		}else{
			if(s[aux] == 'W' && s[aux+1] == 'U' && s[aux+2] == 'B'){
				cout << s[i];
				aux = aux+3;
				cout << aux << endl;
			}
		}
	}
	cout << endl;	

	return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main(){
	string s = "Deitado berco eternamente em berco esplendido";
	string sub = "berco ";
	
	size_t pos = s.find(sub);
	if(pos != string::npos){
		cout << "Aqui: " << pos << endl;
	}else{
		cout << "Não encontrada" << endl;
	}

	for(size_t i=0; i<s.size(); i++){
		if(i < pos || i >= pos + sub.size()){
			cout << s[i];
		}
		/*if(s[i] != pos){
			cout << s[i] << " " << endl;
		}*/
	}
	cout << endl;
	
	return 0;
}

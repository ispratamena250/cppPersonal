#include <iostream>
#include <string>

using namespace std;

int main(){
	string s = "tres pratos de trigo para tres tigres tres tristes tres";
	string sub = "tres";
	size_t i=0;

	size_t pos = s.find(sub);
	while((pos = s.find(sub, pos)) != string::npos){
		cout << "Encontrado em: " << pos;
		pos += sub.size();
		if(i < pos || i >= pos + sub.size()){
			cout << " -> "<< s[i] << endl;	
		}
		i++;
	}
	cout << endl;

	return 0;
}

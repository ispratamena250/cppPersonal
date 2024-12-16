#include <iostream>
#include <string>

using namespace std;

int main(){
	string s = "tres pratos de trigo para tres tigres tristes";
	string sub = "tres";
	size_t i=0;

	size_t pos = s.find(sub);
	while((pos = s.find(sub, pos)) != string::npos){
		cout << "Encontrado em: " << pos << endl;
		pos += sub.size();
		if(i < pos || i >= pos + sub.size()){
			cout << s[i];	
		}
		i++;
	}
	cout << endl;

	return 0;
}

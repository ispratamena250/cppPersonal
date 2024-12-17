#include <iostream>
#include <string>

using namespace std;

int main(){
	string s;
	cin >> s;
	
	for(size_t i=0; i<s.size(); i++){
		if(i==1 and s[i] >= 'A' and s[i]<= 'Z'){
			s[i] = s[i] - ('A' - 'a');
		}
	}
	for(size_t i=0; i<s.size(); i++){
		cout << s[i];
	}

	cout << endl;

	return 0;
}

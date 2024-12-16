#include <iostream>
#include <string>

using namespace std;

int main(){
	string s;
	cin >> s;
	
	for(size_t i=0; i<s.size(); i++){
		if(i==1 and s[i] >= 'a' and s[i]<= 'z'){
			s[i] = s[i] - ('a' - 'A');
		}
	}
	for(size_t i=0; i<s.size(); i++){
		cout << s[i];
	}

	cout << endl;

	return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main(){
	int countA=0, counta=0;

	string s;
	cin >> s;

	for(size_t i=0; i<s.size(); i++){
		if(s[i] >= 'a' and s[i] <= 'z'){
			counta++;
		}else if(s[i] >= 'A' and s[i] <= 'Z'){
			countA++;
		}
	}

	if(counta > countA){
		for(size_t i=0; i<s.size(); i++){
			if(s[i] >= 'A' and s[i] <= 'Z')
				s[i] = s[i] - ('A' - 'a');
		}
	}else if(countA > counta){
		for(size_t i=0; i<s.size(); i++){
			if(s[i] >= 'a' and s[i] <= 'z')
				s[i] = s[i] - ('a' - 'A');
		}
	}else if(counta == countA){
		for(size_t i=0; i<s.size(); i++){
			if(s[i] >= 'A' and s[i] <= 'Z' )
				s[i] = s[i] - ('A' - 'a');
		}	
	}
	
	for(size_t i=0; i<s.size(); i++){
		cout << s[i];
	}
	cout << endl;

	return 0;
}

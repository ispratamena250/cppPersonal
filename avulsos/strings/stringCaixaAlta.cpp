#include <iostream>
#include <string>

using namespace std;

int main(){
	string s, result;
	cin >> s;
	
	for(size_t i=0; i<s.size(); i++){
		if(s[i] >= 'A' and s[i] <= 'Z'){
			s[i] = s[i] - ('A' - 'a');
			result.push_back(s[i]);
		}else if(s[i] >= 'a' and s[i] <= 'z'){
			result.push_back(s[i]);
		}
	}
	for(auto e : result)
		cout << e;

	cout << endl;
	return 0;
}

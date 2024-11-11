#include <iostream>
#include <string>

using namespace std;

int main(){
	string s;
	int len;

	cin >> s;
	len = s.size();

	for(int i=0; i<len; i++){
		while(i <= len-1){
			cout << s[i] << endl;
			i--;
		}
	}

	return 0;
}

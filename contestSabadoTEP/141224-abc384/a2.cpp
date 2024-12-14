#include <bits/stdc++.h>

using namespace std; 

int main(){
	int n;
	cin >> n;

	char c1, c2;
	string s(n, ' ');

	cin >> c1 >> c2 >> s;

	for(size_t i=0; i<s.size(); i++){
		if(s[i] != c1){
			s[i] = c2;
		}	
	}
	cout << s << endl;

	return 0;
}

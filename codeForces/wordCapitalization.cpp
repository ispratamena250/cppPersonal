#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);	
	cin.tie(NULL);
	cout.tie(NULL);

	string s;
	cin >> s;
	for(size_t i=0; i<s.size(); i++){
		if(i==0 and s[i] >= 'a' && s[i] <= 'z'){
			s[i] = s[i] - ('a' - 'A');
		}
	}
	cout << s << endl;

	return 0;
}

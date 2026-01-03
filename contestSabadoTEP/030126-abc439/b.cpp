#include <bits/stdc++.h>

using namespace std;

int main(){	
	int n, ans=0;

	cin >> n;

	string s = to_string(n);

	do{
		for(size_t i=0; i<s.length(); i++){
			if(i == 0) ans = 0;
			char c = s[i];
			ans += ((c - '0') * (c - '0'));
		}
		s = to_string(ans);
		
	}while(ans >= 10);

	if(ans != 1){ cout << "No" << endl; }
	if(ans == 1){ cout << "Yes" << endl; }

	cout << endl;
	return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	char c1, c2;
	int countC1=0, countC2=0, n;
	
	cin >> n;	
	string s(n, ' ');
	cin >> c1 >> c2 >> s;

	for(int i=0; i<n; i++){
		if(s[i] == c1){
			countC1++;
		}else if(s[i] == c2){
			countC2++;
		}
	}
	cout << countC1 << " " << countC2 << endl;
	
	if(countC1 == 0){
		for(int i=0; i<n; i++){
			if(s[i] != c1 && s[i] != c2)
				s[i] = c1;
		}
	}else if(countC2 == 0){
		for(int i=0; i<n; i++){
			if(s[i] != c2 && s[i] != c1)
				s[i] = c2;
		}
	}		
	cout << s << endl;

	return 0;
}

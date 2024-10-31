#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, igual=0;
	string s;

	cin >> n >> s;
	
	for(int i=0; i<=n; i++){
		if(i>0){
			if(s[i] == s[i-1]){
				igual++;
			}
		}
	}
	cout << igual << endl;

	return 0;
}

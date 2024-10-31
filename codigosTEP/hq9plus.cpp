#include <bits/stdc++.h>

using namespace std;

int main(){
	int count = 0, aux;
	string s;

	cin >> s;
	aux = s.size();
	for(int i=0; i<aux; i++){
		if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9'){
			count++;
		}
	}
	if(count != 0){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}

	return 0;
}

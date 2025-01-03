#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, auxA=0, auxD=0;
	cin >> n;
	string s(n, ' ');

	cin >> s;
		
	for(size_t i=0; i<s.size(); i++){
		if(s[i] == 'A'){
			auxA++;
		}else{
			auxD++;
		}
	}
	if(auxA > auxD){
		cout << "Anton" << endl;
	}else if(auxD > auxA){
		cout << "Danik" << endl;
	}else{
		cout << "Friendship" << endl;
	}

	return 0;
}

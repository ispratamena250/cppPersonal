#include <bits/stdc++.h>

using namespace std;

int main(){ 
	string s;
	int countOne=0, countZero=0, aux=0, sz=0;

	cin >> s;
	sz = s.size();
		for(int i=0; i<=sz; i++){
		if(s[i] == '0'){
			countZero++;
			if(countZero >= 7){
				aux++;
			}	
			countOne = 0;
		}else if(s[i] == '1'){
			countOne++;
			if(countOne >= 7){
				aux++;
			}
			countZero = 0;
		}
	}
	if(aux > 0){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}

	return 0;
}

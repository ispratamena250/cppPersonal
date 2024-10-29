#include <bits/stdc++.h>

using namespace std;

int main(){
	string S, aux1, aux2, aux3;

	cin >> S;
	for(int i=0; i<=2; i++){
		aux1 = S[0];
		aux2 = S[1];
		aux3 = S[2];
	}

	if((aux1!=aux2 && aux1!=aux3 && aux2!=aux1 && aux2!=aux3 && aux3!=aux1 && aux3!=aux2) && (aux1=="A" || aux2=="B" || aux3=="C")){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}

	return 0;
}

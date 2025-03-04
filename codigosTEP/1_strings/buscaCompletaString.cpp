#include <iostream>
#include <string>

using namespace std;

int occurences(const string& P, const string& S);

int main(){
	string S = "Deitado berco eternamente em berco esplendido";
	string P = "berco";

	cout << occurences(P, S) << endl; 

	cout << endl;
	return 0;
}

int occurences(const string& P, const string& S){
	int m = P.size();
	int n = S.size();
	int occ = 0;

	for(int i=0; i<=n-m; i++){
		occ += (P == S.substr(i, m) ? 1 : 0);
		cout << "String: " << S.substr(i, m) << endl;
	}

	return occ;
}

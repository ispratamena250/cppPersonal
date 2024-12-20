#include <iostream>
#include <string>

using namespace std;

int occurrences(const string& a, const string& b);

int main(){
	string s1, s2; //Procurar s1 em s2
	cin >> s1 >> s2;

	cout << occurrences(s1, s2) << endl;

	return 0;
}

int occurrences(const string& p, const string& s){
	int m = p.size();
	int n = s.size();
	int occ=0;

	for(int i=0; i<n-m; i++){
		occ += (p == s.substr(i, m) ? 1 : 0 );
	}

	return occ;
}

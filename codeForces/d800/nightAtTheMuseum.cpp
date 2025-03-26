#include <iostream>
#include <string>

using namespace std;

int main(){
	int direita=0, esquerda1=0, esquerda2=0;
	string s;

	cin >> s;

	for(size_t i=0; i<s.size(); i++){
		direita = esquerda1 = esquerda2 = 0;
		if(i > 0){
			for(int j=s.at(i-1); j<=s.at(i); j++){
				if(j != s.at(i)){
					direita++;
				}
			}
			for(int k='a'; k<=s.at(i-1); k++){
				esquerda1++;
			}
			for(int l='a'; l<=s.at(i); l++){
				esquerda2++;
			}
			cout << s.at(i-1) << s.at(i) << " " << direita << " " << esquerda1 + (26 - esquerda2) << endl;
		}
	}

	//cout << direita << " " << esquerda1 + (26 - esquerda2) << endl;

	cout << endl;
	return 0;
}

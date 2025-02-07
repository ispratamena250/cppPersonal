//Erro
#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> v1;
	vector<int> v2;

	for(int i=0; i<8; i++){
		v1[i] = i;
	}
	for(int i=0; i<5; i++){
		v2[i] = i;
	}

	for(int i=0; i<8; i++){
		for(int j=0; j<5; j++){
			cout << v1[i] << " " << v2[j] << endl;
		}
	}

	return 0;
}

#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int main(){
	int n, aux1, aux2; 
	cin >> n;
	
	vector<int> vec(n);

	for(int i=0; i<n; i++){
		cin >> vec[i];
		if(i == 0){
			aux1 = vec[i];	
			aux2 = i;
		}else if(vec[i] < aux1){
			aux1 = vec[i];
			aux2 = i;
		}
	}

	cout << "Menor valor: " << aux1 << "\n" << "Posicao: " << aux2 << endl;

	return 0;
}

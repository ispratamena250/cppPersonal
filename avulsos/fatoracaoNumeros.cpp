#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> xs = {2, 3, }
	int n = 32768, aux;

	for(int i=0; i<190; i++){
		if(n % 2 == 0){
			aux = n/2;
			cout << aux << endl;
		}
		n = aux;
	}

	cout << endl;
	return 0;
}

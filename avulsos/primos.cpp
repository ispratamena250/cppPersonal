#include <iostream>

using namespace std;

int main(){
	for(int i=1; i<25; i++){
		if(i%1 == 0 and i%i == 0)
			cout << i << endl;
	}

	cout << endl;
	return 0;
}

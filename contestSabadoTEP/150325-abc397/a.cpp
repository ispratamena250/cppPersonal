#include <iostream>

using namespace std;

int main(){
	float t;

	cin >> t;

	if(t >= 38.0){
		cout << 1 << endl;
	}else if(t >= 37.5 and t < 38.0){
		cout << 2 << endl;
	}else if(t < 37.5){
		cout << 3 << endl;
	}

	cout << endl;
	return 0;
}

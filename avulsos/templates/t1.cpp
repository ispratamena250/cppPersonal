#include <iostream>

using namespace std;

template <typename T> 
T soma(T a, T b){
	return a + b;
}

int main(){
	cout << soma(3, 4) << endl;

	cout << soma(1.2, 5.7) << endl;

	cout << soma<string>("Hello", "world") << endl;

	cout << endl;
	return 0;
}

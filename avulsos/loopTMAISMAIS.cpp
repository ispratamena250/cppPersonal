#include <iostream>

using namespace std;

int main(){
	int t = 10;

	cout << "--t:" << endl;
	while(--t)
		cout << t << " ";

	cout << endl << "t--: "<< endl;
	t = 10;
	while(t--)
		cout << t << " ";

	cout << endl;
	return 0;
}

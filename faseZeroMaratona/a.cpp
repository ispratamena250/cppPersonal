#include <iostream>

using namespace std;

int main(){
	int c, g;

	cin >> c >> g;

	if(c == 1 and g == 1)
		cout << "vivo e morto" << endl;
	else if(c == 1 and g == 0)
		cout << "vivo e morto" << endl;
	else if(c == 0 and g == 0)
		cout << "morto" << endl;
	else if(c == 0 and g == 1)
		cout << "vivo" << endl;

	cout << endl;
	return 0;
}

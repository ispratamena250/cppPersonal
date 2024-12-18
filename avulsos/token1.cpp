#include <iostream>
#include <sstream>

using namespace std;

int main(){
	istringstream s("123.456.789-10");
	string token;

	cout << s << endl;

	getline(s, token, '.');
	cout << token << endl;

	getline(s, token, '.');
	cout << token << endl;

	getline(s, token, '-');
	cout << token << endl;

	getline(s, token);
	cout << token << endl;

	return 0;
}

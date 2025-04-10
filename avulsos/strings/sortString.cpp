#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	string s;

	cin >> s;

	cout << s << endl;

	sort(s.begin(), s.end());

	cout << s << endl;

	cout << endl;
	return 0;
}

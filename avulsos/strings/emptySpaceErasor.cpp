#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string erasing(const string &s);

int main(){
	string s;

	getline(cin, s);

	s = erasing(s);

	cout << s;

	cout << endl;
	return 0;
}

string erasing(const string &s){
	string result = s;

	result.erase(remove_if(result.begin(), result.end(), ::isspace), result.end());

	return result;
}

#include <iostream>
#include <string>

using namespace std;

int main(){
	string s;
	char prev = 'a';
	int r=0;

	cin >> s;

	for(size_t i=0; i<s.size(); i++){
		char curr = s.at(i);
		int right = abs(curr - prev);
		int left = abs(abs(curr - prev) - 26);
		r += min(right, left);
		prev = curr;
	}
	cout << r;

	cout << endl;
	return 0;
}


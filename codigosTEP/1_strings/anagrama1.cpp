#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool is_anagram(const string& s, const string& t);

int main(){
	string a, b;
	cin >> a >> b;

	is_anagram(a, b) ? cout << "a" << endl : cout << "na" << endl;

	return 0;
}

bool is_anagram(const string& s, const string& t){
	string a(s), b(t);

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	return a==b;
}

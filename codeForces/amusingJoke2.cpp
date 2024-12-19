#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool is_anagram(const string& s, const string& t);

int main(){
	string s1, s2, s3, auxS;

	cin >> s1 >> s2 >> s3;
	auxS = s1 + s2;
	
	is_anagram(auxS, s3) ? cout << "YES" << endl : cout << "NO" << endl;	

	return 0;
}

bool is_anagram(const string& s, const string& t){
	string a(s);
	string b(t);
	
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());	
	
	return a==b;
}

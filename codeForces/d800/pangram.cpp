#include <bits/stdc++.h>

using namespace std;

map<char, int> hist(const string& s);

int main(){
	int n;
	cin >> n;
	string s(n, ' ');
	cin >> s;
	
	char start = 'a';
	string alfabeto;

	for(size_t i=0; i<s.size(); i++){
		if(s[i] >= 'A' and s[i] <= 'Z'){
			s[i] = s[i] - ('A' - 'a'); 
		}
	}
	
	for(int i=start; i<='z'; i++){
		alfabeto.push_back(i);
	}

	
	map<char, int> h1 =  hist(s);
	/*for(const auto& c1 : h1)
		cout << c1.first << ":" << c1.second << endl;*/
	map<char, int> h2 =  hist(alfabeto);
	/*for(const auto& c2 : h2)
		cout << c2.first << ":" << c2.second << endl;*/
	if(h1.size() == h2.size()){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
	
	/*if(s.size() != alfabeto.size()){
		cout << s.size() << " " << alfabeto.size() << " " << "NO" << endl;
	}else{
		map<char, int> h1 =  hist(s);
		for(const auto& c1 : h1)
			cout << c1.first << ":" << c1.second << endl;
		map<char, int> h2 =  hist(alfabeto);
		for(const auto& c2 : h2)
			cout << c2.first << ":" << c2.second << endl;
		if(h1.size() == h2.size())
			cout << "YES" << endl;
	}*/

	return 0;
}

map<char, int> hist(const string& s){
	map<char, int> h;
	
	for(auto c : s)
		++h[c];

	return h;
}

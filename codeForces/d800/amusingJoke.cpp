#include <bits/stdc++.h>

using namespace std;

map<char, int> hist(const string& s);

int main(){
	string s1, s2, s3, auxs;
	cin >> s1 >> s2 >> s3;
	auxs = s1 + s2;

	//map<char, int> m1 = hist(s1);	
	/*for(const auto& c : m1)
		cout << c.first << ":" << c.second << endl;
	cout << endl;*/
	//map<char, int> m2 = hist(s2);
	/*for(const auto& c : m2)
		cout << c.first << ":" << c.second << endl;
	cout << endl;*/
	map<char, int> m3 = hist(s3);
	/*for(const auto& c : m3)
		cout << c.first << ":" << c.second << endl;
	cout << endl;*/
	
	map<char, int> mAux = hist(auxs);
	map<char, int> diff;
	for(auto& pair : mAux){
		if(m3.find(pair.first) == m3.end()){
			diff.insert(pair);
		}
	}
	for(auto& pair : diff){
		cout << pair.first << " " << pair.second << endl;
	}
	cout << diff.size() << endl;
	/*if(m1.size() + m2.size() == m3.size()){
		cout << m1.size() << " " << m2.size() << " " << m3.size() << " " << "YES" << endl;
	}else{
		cout << m1.size() << " " << m2.size() << " " << m3.size() << " " << "NO" << endl;
	}*/

	return 0;
}

map<char, int> hist(const string& s){
	map<char, int> h;

	for(auto c : s)
		++h[c];

	return h;
}

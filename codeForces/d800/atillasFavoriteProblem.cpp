#include <bits/stdc++.h>

using namespace std;

//Prototype
int alfaIndex(char c);

int main(){
	string s;
	int t;
	vector<int> ans;

	cin >> t;

	for(int i=0; i<t; i++){
		int z;
		cin >> z;
		string s(z, ' ');
		cin >> s;
		sort(s.begin(), s.end());
		int index = alfaIndex(s.at(s.size()-1));
		ans.push_back(index);
	}

	for(auto e : ans)
		cout << e << endl;

	cout << endl;
	return 0;
}

int alfaIndex(char c){
	int count = 1;
	char begin = 'a', end = 'z';
	string alfa;

	for(int i=begin; i<=end; i++)
		alfa.push_back(i);

	for(auto e : alfa){
		if(e != c){
			count++;
		}else{ break; }
	}

	return count;
}

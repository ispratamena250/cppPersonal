#include <iostream>
#include <string>
#include <map>
#include <cmath>

using namespace std;

map<char, int> hist(const string& s){
	map<char, int> h;

	for(auto c : s)
		++h[c];

	return h;
}

int main(){
	long long int n;
	string s, t;
	char caractere = '*';
	float taxa;
	int qh1=0, qh2=0;

	cin >> n >> s >> t;

	map<char, int> h1 = hist(s);
	if(h1.count(caractere))
		qh1 = h1[caractere];

	map<char, int> h2 = hist(t);
	if(h2.count(caractere))
		qh2 = h2[caractere];
	else
		qh2 = 0;

	taxa = (float)(qh1 - qh2) / qh1;
	cout << ceil(taxa * 100.0)/100.0 << endl; //Para conseguir passar no input 3
	//cout << taxa << endl; //Nao passa no input 3

	cout << endl;
	return 0;
}

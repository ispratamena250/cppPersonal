#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(){
	set<char> conj;

	string n;
	cin >> n;

	for(char c : n){
		conj.insert(c);
	}
	
	if(conj.size() % 2 == 0){
		cout << "CHAT WITH HER!" << endl;
	}else{
		cout << "IGNORE HIM!" << endl;
	}		

	return 0;
}

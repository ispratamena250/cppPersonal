#include <iostream>
#include <string>

using namespace std;

int main(){
	string s, s2, countI=0, countO=0;

	cin >> s;

	int count=1;
	cout << s.size() + (s.size()-1) << endl << endl;
	for(size_t i=0; i<s.size()+(s.size()-1); i++){
		if(count==1){
			s2.push_back(s[i]);
			count++;
			cout << "aqui1";
		}else if(count%2 == 0 and count != 1){
			char aux = ' ';
			s2.push_back(aux);
			count++;
			cout << "aqui2";
		}else if(count%2 != 0 and count != 1){
			s2.push_back(s[i/2]);
			count++;
			cout << "aqui3";
		}	
		if(s[/i] == 'i'){
			countI++;
		}else if(s[i/2] == 'o'){
			countO++;
		}
	}

	int count2=0;
	for(size_t i=0; i<s2.size(); i++){
		if(i%2 == 0){
			if(s2[i] == s2[i+2])		
				count2++;
		}
	}

	cout << endl << endl;
	if(countI != countO)
		count2++;

	cout << count2 << endl;
	for(auto e : s2)
		cout << e;
	
	cout << endl;
	return 0;
}

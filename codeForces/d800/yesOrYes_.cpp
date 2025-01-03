#include <iostream>
#include <string>
//#include <algorithm>

using namespace std;

int main(){
	int t;
	string s(3, ' '), auxS = "YES";
	cin >> t;
	cout << endl << endl;	
	for(int i=0; i<t; i++){
		cin >> s;
		//cout << "aqui " << s << endl;
		for(size_t j=0; j<s.size(); j++){
			if(s[j] >= 'a' and s[j] <= 'z')
				s[j] = s[j] - ('a' - 'A');
		}
		//sort(s.begin(), s.end());
		//sort(auxS.begin(), auxS.end());
		if(s == auxS){
			cout << s << " " << "YES" << endl;
		}else{
			cout << s << " " << "NO" << endl;
		}
	}

	return 0;
}

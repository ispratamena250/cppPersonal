#include <iostream>
#include <string>

using namespace std;

int main(){
	int n;
	cin >> n;

	string s(n, ' '), auxI, auxP;
	cin >> s;

	for(size_t i=1; i<=s.size(); i++){
		cout << "i: " << i << " ";
		if(i%2 != 0){
			cout << s[i-1] << s[i] << endl;
			auxI = s[i-1] + s[i];
			cout << auxI << endl;
		}else if(i%2 == 0){
			cout << s[i-1] << s[i] << endl;
			auxP = s[i-1] + s[i];
			cout << auxP << endl;
		}
	}

	cout << endl;
	return 0;
}

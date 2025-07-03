#include <iostream>
#include <string>

using namespace std;

int main(){
	string s;
	int m, count=0;

	cin >> s >> m;

	for(int i=0; i<m; i++){
		int l, r;
		cin >> l >> r;
		count = 0;
		for(int j=l-1; j<r-1; j++){
			if(s.at(j) == s.at(j+1)){
				count++;
			}
		}
		cout << count << endl;
	}


	cout << endl;
	return 0;
}

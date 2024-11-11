#include <iostream>
#include <string>

using namespace std;

int main(){
	string s1, s2;
	int count=0, len1, len2;

	cin >> s1 >> s2;
	len1 = s1.size();
	len2 = s2.size();

	if(len1 != len2){
		cout << "d" << endl;
		exit(1);
	}

	for(int i=0; i<len1; i++){
		if(s1[i] != s2[i]){
			count++;
		}
	}
	if(count > 0){
		cout << "d" << endl;
	}else{
		cout << "i" << endl;
	}

	return 0;
}

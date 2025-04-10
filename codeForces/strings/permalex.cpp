#include <bits/stdc++.h>

using namespace std;

int main(){
	string s; //acab
	int count=0, aux;

	cin >> s;
	aux = s.size();
	for(int i=0; i<=aux; i++){
		if(i>0){
			if(s[i] > s[i-1]){
				count++;
			}	
		}
	}
	cout << count << endl;

	return 0;
}

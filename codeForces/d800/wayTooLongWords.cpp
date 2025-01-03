#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	string s;
	int n, aux;

	cin >> n;
	vector<string> v(n);
	
	for(int i=0; i<n; i++){
		cin >> s;
		if(s.size() <= 10){
			v[i] = s;
		}
		else{
			aux = s.size() - 2;
			v[i] = s[0] + to_string(aux) + s[s.size()-1];			
		}	
	}
	for(int i=0; i<n; i++){
		cout << v[i] << endl;
	}

	return 0;
}

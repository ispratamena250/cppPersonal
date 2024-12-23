#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//int count=0;
	size_t n;
	vector<string> s;
	string aux;

	cin >> n;

	for(size_t i=0; i<n; i++){
		cin >> aux;
		s.push_back(aux);
	}

	cout << endl << endl;
	/*for(string e : s){
		//cout << e << e.size() << endl;
		if(e[count] == 'a'){
			cout << e[count] << " " << count << endl;
		}else{
			cout << e << endl;
		}

		cout << count << endl;
		count++;
	}*/
	
	cout << "comeca" << endl;
	for(size_t i=0; i<n; i++){
		//cout << "aqui " << s[i] << endl;
		if(s[i+1] != s[i]){
			cout << i << " " << i+1 << " " << s[i+1] << endl;
		}
	}

	cout << endl;
	return 0;
}

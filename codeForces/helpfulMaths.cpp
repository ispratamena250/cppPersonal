#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);	

	string s, aux;
	vector<int> v;
	
	cin >> s;
	for(size_t i=0; i<s.size(); i++){
		if(s[i] != '+'){
			aux += s[i];
		}else{
			if(!aux.empty()){
				v.push_back(stoi(aux));
				aux.clear();	
			}	
		}
	}	
	if(!aux.empty()){
		v.push_back(stoi(aux));
	}
	
	for(int num : v){
		cout << num << endl;
	}

	return 0;
}

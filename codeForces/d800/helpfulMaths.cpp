#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);	

	string s, auxString;
	vector<int> v;
	int count=0, index=0;	

	cin >> s;
	for(size_t i=0; i<s.size(); i++){
		if(s[i] != '+'){
			auxString += s[i];
			count++;
		}else{
			if(!auxString.empty()){
				v.push_back(stoi(auxString));
				auxString.clear();	
			}	
		}
	}	
	if(!auxString.empty()){
		v.push_back(stoi(auxString));
	}
	
	sort(v.begin(), v.end());

	for(int num : v){
		index++;
		if(index != count){
			cout << num << "+";
		}else{
			cout << num;
		}
	}
	cout << endl;

	return 0;
}

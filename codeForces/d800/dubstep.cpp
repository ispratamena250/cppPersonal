#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	string s;
	cin >> s;
	string sub = "WUB";
	size_t pos = 0;
	vector<size_t> posicoes;

	while((pos = s.find(sub, pos)) != string::npos){
		posicoes.push_back(pos);
		pos += sub.size();
	}

	for(size_t i=0; i<s.size(); i++){
		bool isSub = false;
		for(size_t p : posicoes){
			if(i>=p && i<p + sub.size()){
				isSub = true;
				break;
			}
		}
		
		if(!isSub){
			cout << s[i] << " ";
		}
	}
	cout << endl;

	return 0;
}

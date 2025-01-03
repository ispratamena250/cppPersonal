#include <bits/stdc++.h>

using namespace std;

int main(){
	size_t ss, count=0;
	
	string s, t;
	cin >> s >> t;

	ss = s.size();

	for(size_t i=0; i<s.size(); i++){
		if(t[ss-1] == s[i]){
			count++;
			//cout << t[ss] << " " << s[i] << endl;
		}
		ss--;
	}
	//cout << count << " " << t << t.size() << " " << s << s.size() << endl;	
	if(count == s.size() and s.size() == t.size()){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}

	return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main(){
  vector<int> v;

	string s;
  cin >> s;
	string sub = "WA";
	size_t i=0;

	size_t pos = s.find(sub);
	while((pos = s.find(sub, pos)) != string::npos){
		cout << "Encontrado em: " << pos;
    v.push_back(pos);
		pos += sub.size();
		if(i < pos || i >= pos + sub.size()){
			cout << " -> "<< s[i] << endl;	
		}
		i++;
	}
	cout << endl;

  for(auto e : v)
    cout << e;

  cout << endl;
	return 0;
}


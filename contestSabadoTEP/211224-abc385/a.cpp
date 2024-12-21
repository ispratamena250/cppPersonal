#include <bits/stdc++.h>

using namespace std;

map<char, int> hist(const string& v);

int main(){ //50 min
	vector<int> v;

	int a, b, c, count=0;
	cin >> a >> b >> c;

	v.push_back(a);
	v.push_back(b);
	v.push_back(c);
	v.push_back(a+b);
	v.push_back(a+c);
	v.push_back(b+c);

	sort(v.begin(), v.end());
	for(int i=0; i<6; i++){
		if(i>0 and v[i]==v[i-1])
			count++;
	}
	
	count>0 ? cout << "Yes" << endl : cout << "No" << endl;

	return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, b, c;

	cin >> a >> b >> c;

	if(pow(a, c) > pow(b, c)){
		cout << ">" << endl;
	}else if(pow(a, c) < pow(b, c)){
		cout << "<" << endl;
	}else if(pow(a, c) == pow(b, c)){
		cout << "=" << endl;
	}

	cout << endl;
	return 0;
}

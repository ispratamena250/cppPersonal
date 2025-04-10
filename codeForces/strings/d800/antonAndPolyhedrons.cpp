#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, count=0;
	string s;
	vector<string> v;

	cin >> n;
	for(int i=0; i<n; i++){
		cin >> s;
		v.push_back(s);
	}
	
	for(int i=0; i<n; i++){
		if(v[i] == "Tetrahedron"){
			count += 4;
		}else if(v[i] == "Cube"){
			count += 6;
		}else if(v[i] == "Octahedron"){
			count += 8;
		}else if(v[i] == "Dodecahedron"){
			count += 12;
		}else if(v[i] == "Icosahedron"){
			count += 20;
		}
	}
	cout << count << endl;

	return 0;
}

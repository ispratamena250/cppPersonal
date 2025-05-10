#include<iostream>
#include<vector>
#include<set>
#include<algorithm>

using namespace std;

int main(){
	set<int> s;
	int n, m;
	
	cin >> n >> m;

	vector<int> a(n), b(m);

	for(int i=0; i<n; i++){
		cin >> a.at(i);
		s.insert(a.at(i));
	}

	for(int i=0; i<m; i++){
		cin >> b.at(i);
		s.insert(b.at(i));
	}

	/*for(auto e : a){
		for(auto f : b){
			s.insert(e);
			s.insert(f);
		}
	}*/
	
	for(auto e : s)
		cout << e << " ";

	cout << endl;
	return 0;
}

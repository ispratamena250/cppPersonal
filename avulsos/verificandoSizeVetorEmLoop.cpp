#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(){
	vector<int> v;
	set<int> s;

	for(int i=0; i<10; i++){
		v.push_back(i);
		cout << v.size() << endl;
	}

	cout << endl;
	for(int i=0; i<10; i++){
		s.insert(i);
		cout << s.size() << endl;
	}

	cout << endl;
	return 0;
}

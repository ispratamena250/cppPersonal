#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(){
	map<int, int> hist;
	vector<int> xs;

	for(int i=0; i<5; i++){
		int x;
		cin >> x;
		xs.push_back(x);
	}

	for(size_t i=0; i<xs.size(); i++){
		hist[xs[i]]++;
	}

	for(const auto &e : hist)
		cout << e.first << ":" << e.second << endl;

	cout << endl;
	return 0;
}

#include <iostream>
#include <vector>

#define mi 999
#define mx 0

using namespace std;

int main(){
	vector<int> xs(5);
	int b, l;

	for(auto &e : xs){
		cin >> e;
	}

	for(auto e : xs){
		if(e < mi){
			l = e;
		}
		if(e > mx) b = e;
	}

	cout << "Biggest: " << b << endl << "Lowest: " << l;

	cout << endl;
	return 0;
}

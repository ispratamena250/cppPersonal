#include <iostream>
#include <vector>

using namespace std;

int main(){
	int mx[3][3];
	vector<int> v;

	int count=0;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			mx[i][j] = count;
			count++;
		}
	}

	for(int i=0; i<3; i++){
		cout << endl;
		for(int j=0; j<3; j++){
			cout << mx[i][j] << " ";
			v.push_back(mx[i][j]);
		}
	}

	cout << endl << endl;
	for(auto e : v)
		cout << e << " ";

	cout << endl;
	return 0;
}

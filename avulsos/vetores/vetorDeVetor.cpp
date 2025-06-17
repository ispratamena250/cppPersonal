#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<vector<int>> v(3, vector<int>(3));
	srand(time(NULL));

	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			v[i][j] = rand()%100;
		}
	}

	for(int i=0; i<3; i++){
		cout << endl;
		for(int j=0; j<3; j++){
			cout << v[i][j] << " ";
		}
	}

	cout << endl;
	return 0;
}

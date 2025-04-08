#include <iostream>

using namespace std;

int main(){
	int mx[3][3];

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
		}
	}

	for(int i=0; i<3; i++){
		cout << endl;
		for(int j=0; j<3; j++){
			cout << mx[i][j] << " " << mx[i][j+1] << " | ";
		}
	}

	cout << endl;
	return 0;
}

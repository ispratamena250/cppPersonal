#include <iostream>
#include <string>

using namespace std;

int main(){
	int z;
	char  m[8][8];

	cin >> z;

	for(int a=0; a<z; a++){
		for(int i=0; i<8; i++)
			for(int j=0; j<8; j++)
				cin >> m[i][j];

		for(int i=0; i<8; i++)
			for(int j=0; j<8; j++)
				if(m[i][j] != '.') cout << m[i][j];

		cout << endl;
	}

	return 0;
}

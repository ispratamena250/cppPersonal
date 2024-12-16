//Tirando dúvida sobre vetores em C++
#include <iostream>
#include <vector>
//#include <ctime>

using namespace std;

int main(){
	vector<int> v1(5);
	vector<int> v2(5);
	//srand(time(NULL));

	for(int i=0; i<5; i++){
		v1[i] = i;
	}
	for(int j=0; j<5; j++){
		v2[j] = j;
	}

	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			cout << v1[i] << " " << v2[j] << endl;
		}
	}

	return 0;
}

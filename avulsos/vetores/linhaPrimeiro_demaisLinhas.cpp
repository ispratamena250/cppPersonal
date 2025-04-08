#include <iostream>
#include <array>
#include <numeric>

using namespace std;

int main(){
	array<int, 5> v1, v2;

	iota(v1.begin(), v1.end(), 1);
	iota(v2.begin(), v2.end(), 1);

	for(auto e : v1)
		cout << e << " ";

	cout << endl;
	for(auto e : v2)
		cout << e << " ";

	cout << endl;
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			if(i == 0){
				cout << v1.at(i) << " " << v2.at(j) << endl;
			}
		}
	}

	cout << endl;
	return 0;
}

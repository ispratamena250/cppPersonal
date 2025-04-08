#include <iostream>
#include <array>
#include <numeric>

using namespace std;

int main(){
	array<int, 21> v;

	iota(v.begin(), v.end(), 0);

	for(int i=0; i<=20; i++){
		if(i % 2){
			cout << v.at(i) << " ";
		}
	}

	cout << endl << endl;
	for(int i=0; i<=20; i++){
		if(not (i % 2)){
			cout << v.at(i) << " ";
		}
	}

	cout << endl;
	return 0;
}

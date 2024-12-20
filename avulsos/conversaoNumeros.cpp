#include <iostream>
#include <bitset>

using namespace std;

int main(){
	int n = 256;

	//cout << dec << n << endl;
	//cout << hex << n << endl;
	//cout << oct << n << endl;
	cout << bitset<9>(n) << endl;

	return 0;
}

#include <iostream>
#include <bitset>

using namespace std;

int main(){
	int n = 720;

	//cout << dec << n << endl;
	//cout << hex << n << endl;
	//cout << oct << n << endl;
	cout << bitset<10>(n) << endl;

	return 0;
}

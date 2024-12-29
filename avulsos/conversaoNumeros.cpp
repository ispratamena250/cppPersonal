#include <iostream>
#include <bitset>
#include <climits>

using namespace std;

int main(){
	unsigned long long n = 681684165198;
  unsigned long long n2 = ULLONG_MAX;
  cout << n2 << endl;

	//cout << dec << n << endl;
	//cout << hex << n << endl;
	//cout << oct << n << endl;
	cout << bitset<100>(n) << endl << endl;
  cout << bitset<100>(n2) << endl;

	return 0;
}

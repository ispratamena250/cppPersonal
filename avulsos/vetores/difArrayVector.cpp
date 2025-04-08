#include <iostream>
#include <array>
#include <numeric>

using namespace std;

int main(){
	array<int, 10> a;

	iota(a.begin(), a.end(), 1);

	for(auto e : a)
		cout << e << " ";

	cout << endl;
	return 0;
}

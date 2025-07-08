#include <iostream>
#include <vector>

using namespace std;

int main(){
	int l, r, n;

	cout << "Tamanho: ";
	cin >> n;

	vector<int> arr(n), ps(n);

	cout << "Array arr: ";
	for(int i=0; i<n; i++)
		cin >> arr.at(i);

	for(int i=0; i<n; i++)
		ps[i] = ps[i-1] + arr[i];

	cout << "Array ps: ";
	for(auto e : ps)
		cout << e << " ";

	cout << endl << "l e r: ";
	cin >> l >> r;

	cout << "Soma: " << ps[r] - ps[l-1] << endl; 

	cout << endl;
	return 0;
}

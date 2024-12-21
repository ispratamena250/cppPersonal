#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	vector<int> v;

	int n, div, q;
	cin >> n;

	div = n;
	while(q > 1){
		while(div >= 1 || div >= 0){
			div -= 2;
		}		
		v.push_back(div+2);
		q = (n - (div+2))/2;
		
		n = q;
		div = n;
	}
	v.push_back(q);

	reverse(v.begin(), v.end());

	for(int e : v)
		cout << e;

	cout << endl;

	return 0;
}

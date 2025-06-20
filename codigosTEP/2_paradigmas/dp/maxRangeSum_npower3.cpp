#include <iostream>
#include <vector>

using namespace std;
using lli = long long int;
lli oo = {1LL << 62};

int mrs(const vector<int> &xs){
	auto n = xs.size();
	lli ans = -oo;

	for(size_t i=0; i<n; ++i){
		for(size_t j=i; j<n; ++j){
			lli aux=0;
			for(size_t k=i; k<=j; ++k){
				aux += xs.at(k);
			}
			ans = max(ans, aux);	
		}
	}

	return ans;
} 

int main(){
	vector<int> xs;

	xs = {1, 1, 1, -5, 3, -2, 4};

	cout << "xs = ";
	for(auto e : xs)
		cout << e << " ";

	int ans = mrs(xs);
	cout << endl << ans;

	cout << endl;
	return 0;
}

#include <iostream>
#include <vector>

using namespace std;

int kadane(const vector<int> &as){
	int ans = as[0], sum = ans;

	for(size_t i=1; i<as.size(); ++i){
		if(sum < 0)
			sum = 0;

		sum += as[i];
		ans = max(ans, sum);
		//cout << ans << " ";
	}
	return ans;
}

int main(){
	vector<int> as = {1, 1, 1, -5, 3, -2, 4};

	cout << "xs = ";
	for(auto e : as)
		cout << e << " ";

	int z = kadane(as);
	cout << endl << z;

	cout << endl;
	return 0;
}

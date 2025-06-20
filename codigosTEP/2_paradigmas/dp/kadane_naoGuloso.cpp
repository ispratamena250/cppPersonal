#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 10

using namespace std;

int kadane(const vector<int> &as){
	vector<int> s(as.size());
	s.at(0) = as.at(0);

	for(size_t i=1; i<as.size(); i++){
		s.at(i) = max(as.at(i), s.at(i-1) + as.at(i));
	}

	/*for(auto e : s)
		cout << e << " ";*/

	return *max_element(s.begin(), s.end());
}

int main(){
	srand(time(NULL));
	vector<int> as = {1, 1, 1, -5, 3, -2, 4};

	/*for(int i=0; i<MAX; i++)
		as.push_back(rand()%100);*/
	
	cout << "xs = ";
	for(auto e : as)
		cout << e << " ";

	int ans = kadane(as);
	cout << endl << ans;

	cout << endl;
	return 0;
}

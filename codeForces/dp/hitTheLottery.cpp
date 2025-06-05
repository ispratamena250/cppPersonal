#include<iostream>
#include <vector>

using namespace std;

int main(){
	ios::sync_with_stdio(false);

	vector<int> xs = {100, 20, 10, 5, 1};
	long long int n, count=0;

	cin >> n;

	for(size_t i=0; i<xs.size(); i++){
		if(xs.at(i) > n)
			xs.at(i) = -1;

		if(xs.at(i) <= n and xs.at(i) != -1){
			do{
				n = n - xs.at(i);
				count++;
			}while(xs.at(i) <= n);
			if(n == 0) break;
		}
	}

	//cout << n << " " << count << endl;
	cout << count << endl;

	cout << endl;
	return 0;
}

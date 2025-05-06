#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	int z;
	vector<int> ans;;

	cin >> z;

	while(z--){
		int size, f, b;

		cin >> size;

		vector<char> s(size);

		for(int i=0; i<size; i++)
			cin >> s.at(i);

		for(int i=0; i<size; i++)
			if(s.at(i) == 'B') f = i;

		for(int i=size-1; i>=0; --i)
			if(s.at(i) == 'B') b = i;

		ans.push_back(f-b);
	}

	cout << endl;
	for(auto e : ans)
		cout << e+1 << endl;

	return 0;
}

#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(){
	int t, count1=0, count2=0;
	vector<string> ans;

	cin >> t;

	for(int i=0; i<t; i++){
		int n;
		cin >> n;
		for(int j=0; j<n; j++){
			int z;
			cin >> z;
			if(z == 1) 
				count1++;
			else if(z == 2) 
				count2++;
		}
		if(count1 == count2)
			ans.push_back("YES");
		else
			ans.push_back("NO");

		cout << i << " " << count1 << " " << count2 << endl;
		count1 = 0;
		count2 = 0;
	}

	for(auto e : ans)
		cout << e << endl;

	cout << endl;
	return 0;
}

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	vector<string> s;

	for(int i=0; i<3; i++)
		s.push_back("teste");

	for(auto e : s)
		cout << e << endl;

	cout << endl;
	return 0;
}

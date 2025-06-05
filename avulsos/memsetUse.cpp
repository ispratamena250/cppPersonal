#include <iostream>
#include <cstring>
#include <vector>
#include <string>
//#include <algorithm> //Para std::fill()
#include <type_traits>

using namespace std;

int main(){
	int v[5]; //É um tipo trivial
	//vector<int> v;
	//fill(v.begin(), v.end(), -1); //Se quiser preencher um std::vector<T>
	char s[5]; //É um tipo trivial
	//string s(5, 'w'); //Se quiser preencher uma std::string

	memset(v, -1, sizeof(v));
	memset(s, 'w', sizeof(s));

	for(auto e : v)
		cout << e << " ";

	cout << endl << s << endl;

	cout << "int e trivial? " << is_trivial<int>::value << endl;
	cout << "string e trivial? " << is_trivial<string>::value << endl;

	cout << endl;
	return 0;
}

#include <iostream>
#include <map>

using namespace std;

int main(){
	map<int, string> m1 = {{1, "teste1"}, {2, "teste2"}, {3, "teste3"}};
	map<int, string> m2 = {{2, "teste0"}, {3, "teste2"}, {4, "teste3"}};
	map<int, string> diff;

	for(auto& pair : m1){
		if(m2.find(pair.first) == m2.end()){
			diff.insert(pair);
		}
	}
	for(auto& pair : diff){
		cout << pair.first << " " << pair.second << endl;
	}

	return 0;
}

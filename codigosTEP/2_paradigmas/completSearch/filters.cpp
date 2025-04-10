/*
 * Problema: gerar todos os inteiros menores que n que sejam multiplos por a ou por b
 * */

#include <iostream>
#include <vector>

using namespace std;

vector<int> filter(int n, int a, int b);

int main(){
	vector<int> v;
	int n, a, b;

	cin >> n >> a >> b;

	v = filter(n, a, b);
	for(auto e : v)
		cout << e << " ";

	cout << endl;
	return 0;
}

vector<int> filter(int n, int a, int b){
	vector<int> ms;

	for(int i=1; i<=n; i++)
		if(i % a == 0 or i % b == 0)
			ms.push_back(i);

	
	return ms;
}

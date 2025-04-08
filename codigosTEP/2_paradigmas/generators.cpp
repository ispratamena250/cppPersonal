/*
 * Problema: gerar todos os inteiros menores que n que sejam multiplos por a ou por b
 * */

#include <iostream>
#include <vector>

using namespace std;

vector<int> generator(int n, int a, int b);

int main(){
	vector<int> v;
	int n, a, b;

	cin >> n >> a >> b;

	v = generator(n, a, b);
	for(auto e : v)
		cout << e << " ";

	cout << endl;
	return 0;
}

vector<int> generator(int n, int a, int b){
	vector<int> ms;

	cout << "a: ";
	for(int i=a; i<=n; i+=a){
		ms.push_back(i);
		cout << i << " ";
	}
	
	cout << endl << "b:  ";
	for(int i=b; i<=n; i+=b){
		if(i % a){
			ms.push_back(i);
			cout << i << "|" << i%a << "|"  << "  ";
		}
	}
	cout << endl;
	
	return ms;
}

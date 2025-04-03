/*
 * Uma função lambda é uma maneira de criar uma pequena função (sem precisar dar nome) onde precisamos usá-la
 * */
#include <iostream>

using namespace std;

int main(){
	auto soma = [](int a, int b){
		return a + b;
	};

	int a, b;

	cin >> a >> b;

	cout << soma(a, b) << endl;

	cout << endl;
	return 0;
}

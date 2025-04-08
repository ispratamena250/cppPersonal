/*
 * O operador modular retorna o resto diferente de zero da divisao; se o valor for zero, ele nao retorna
 * */

#include <iostream>

using namespace std;

int main(){
	int a = 3;

	for(int i=0; i<50; i++){
		if(i % a){
			cout << "1@ " << i%a << " " << endl;
		}else{
			cout << "2@ " << i << " " << a << " " << i%a << endl;
		}
	}

	cout << endl;
	return 0;
}

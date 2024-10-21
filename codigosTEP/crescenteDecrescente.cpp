#include <iostream>

using namespace std;

int main(){
	int x, y;

	cin >> x >> y;
	while(x != y){
		if(x > y){
			cout << "Decrescente" << endl;
			cin >> x >> y;
			if(x < y){
				cout << "Crescente" << endl;
				cin >> x >> y;
				if(x == y){
					break;
				}
			}
		}
	}

	return 0;
}
#Tentar depois!

#include<iostream>

using namespace std;

int OP = 0;

struct InitBeforeMain{
	InitBeforeMain(){
		cout << "Digite: ";
		cin >> OP;
	}
};

InitBeforeMain initObj;

int main(){
	if(OP == 1)
		cout << "um" << endl;
	else
		cout << "nao e um" << endl;

	cout << endl;
	return 0;
}

#include <iostream>
#include <bitset>
#include <math.h>
#include <vector>

using namespace std;

int main(){
	int n, aux=2, pos/*, mult=1*/;
;
	vector<int> v;
	cin >> n;

	cout << bitset<20>(n) << endl;

	for(int i=0; i<21; i++){
		cout << pow(aux, i) << " ";
		//mult += i*2;
		//cout << mult << " ";
		v.push_back(pow(aux, i));
	}

	cout << endl << n << " " << v.size() << endl << "Inicio:" << endl;
	for(size_t i=0; i<v.size(); i++){
		if(n < v[i]){
			cout << i << endl;
			pos = i-1;
			break;
		}
	}
	cout << pos << endl;
	//cout << bitset<pos>(n) << endl;	

	return 0;
}

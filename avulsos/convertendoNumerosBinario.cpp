#include <iostream>
#include <bitset>
#include <math.h>
#include <vector>

using namespace std;

int main(){
	int n, aux=2;
	vector<int> v;
	cin >> n;

	cout << bitset<20>(n) << endl;

	for(int i=0; i<20; i++){
		cout << pow(aux, i) << " ";
		v.push_back(pow(aux, i));
	}

	cout << endl << n << " " << v.size() << endl << "Inicio:" << endl;
	for(size_t i=0; i<v.size(); i++){
		if(n < v[i]){
			cout << i;
			const int pos = i;
			break;
		}
	}
	
	cout << bitset<pos>(n) << endl;	

	return 0;
}

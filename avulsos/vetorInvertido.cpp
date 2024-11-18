#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> v(5);
	int count=5;

	for(int i=0; i<5; i++){
		cin >> v[i]; 
	}

	for(int i=0; i<5; i++){
		cout << v[count-1] << " ";
		count--;
	}
	cout << endl;

	return 0;
}

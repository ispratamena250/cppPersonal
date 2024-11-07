#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> v(20);
	int count=0;

	for(int i=0; i<20; i++){
		if(count<=9){
			v[i] = count;
			count++;
		}else{
			count=0;
		}	
	}
	for(int i=0; i<20; i++){
		cout << v[i] << " ";
	}
	cout << endl;

	return 0;
}

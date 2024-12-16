#include <iostream>
#include <vector>

#define NUM 50

using namespace std;

int main(){
	vector<int> v(NUM);
	int count=0;

	for(int i=0; i<NUM; i++){
		if(i == 0){
			v[0] = 0;
		}else if(i >= 1){
			if(count<9){
				count++;
				v[i] = count;
			}else{
				count=0;
				v[i] = count;
			}	
		}
	}
	for(int i=0; i<NUM; i++){
		cout << v[i] << " ";
	}
	cout << endl;

	return 0;
}

#include <iostream>
#include <vector>
#include <string>
#include <cstring>

using namespace std;

#define MAX 500

int table[MAX];
int count=0; 

int dp(string s, int index){
	if(table[index] == -1){ //ainda nao verificado
		if(s.at(index) == s.at(index+1)){
			return index;
		}else{
			return 0;
		}
	}

	if(table[index] == 0) //ja verificado
		return 0;

	return 0;
} 

int main(){
	string s;
	int m;

	memset(table, -1, sizeof(table));

	cin >> s >> m;

	for(int i=0; i<m; i++){
		int l, r;
		cin >> l >> r;
		for(int j=l-1; j<r-1; j++){
			if(dp(s, j) != 0){ 
				count++;  
				table[j] = dp(s, j);
				cout << "j:" << j << endl;
			}else{
				table[j] = 0;
			}	
		}
		cout << count << endl;
	}

	cout << endl;
	return 0;
}

#include <iostream>
#include <vector>
#include <string>
#include <cstring>

using namespace std;

#define MAX 1000000007

int table[MAX];
int count; 

int dp(string s, int index){
	count = 0;

	if(table[index] == -1){ //ainda nao foi calculado
		if(s.at(index) == s.at(index+1)){
			//table.push_back(index);
			table[index] = index;
			count++;
		}else{
			table[index] = -1;
		}
	}else if(table[index] != -1){ //ja foi calculado
		return count;
	}

	return count;
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
			count = dp(s, j);	
		}
		cout << count << endl;
	}

	cout << endl;
	return 0;
}

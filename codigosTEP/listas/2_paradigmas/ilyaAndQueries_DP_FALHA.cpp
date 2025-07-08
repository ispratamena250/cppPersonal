#include <iostream>
#include <vector>
#include <string>
#include <cstring>

using namespace std;

#define MAX 20

int table[MAX], count=0;
void print(const int table[]);

int dp(string s, int index){
	if(table[index] == -1){
		if(s.at(index) == s.at(index+1)){
			cout << "index:" << index << endl;
			count++;
			return index;
		}else if(s.at(index) != s.at(index+1)){
			return 0;
		}
	}

	if(table[index] == 0){
		return 0;
	}

	return table[index];
} 

int main(){
	string s;
	int m, ans;

	memset(table, -1, sizeof(table));
	print(table);

	cin >> s >> m;

	for(int i=0; i<m; i++){
		int l, r;
		cin >> l >> r;
		count = 0;
		for(int j=l-1; j<r-1; j++){
			ans = dp(s, j);	
			table[j] = ans;
		}
		cout << count << endl;
	}
	print(table);

	cout << endl;
	return 0;
}

void print(const int table[]){
	printf("\n\n");
	for(int i=0; i<MAX; i++){
		printf("%d ", table[i]);
	}
	printf("\n\n");
}

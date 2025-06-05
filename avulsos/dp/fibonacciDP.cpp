#include <iostream>
#include <cstring>

using namespace std;

#define MAX 101

int table[MAX];

int f(long long int n){
	if(n <= 1)
		return n;

	if(table[n] != -1)
		return table[n];

	table[n] = f(n-1) + f(n-2);

	return table[n];
}

int main(){
	memset(table, -1, sizeof(table));

	long long int n;
	cin >> n;
	for(int i=0; i<n; i++)
		cout << f(i) << " ";

	cout << endl;
	return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main(){
	char begin='a', end='z';
	string alfa;
	int count=1;

	for(int i=begin; i<=end; i++)
		alfa.push_back(i);

	for(auto e : alfa){
		cout << e << count << " ";
		count++;
	}

	cout << endl;
	return 0;
}

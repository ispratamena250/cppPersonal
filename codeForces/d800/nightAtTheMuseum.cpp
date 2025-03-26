#include <iostream>

using namespace std;

int main(){
	char begin, end;

	cin >> begin >> end;

	int count1=0;
	for(int i=begin; i<=end; i++){
		count1++;
		count1 = count1 % 26;
	}
	cout << count1-1 << endl;

	int count2=0;
	for(int i=end; i<=begin; i--){
		count2++;
		count2 = count2 % 26;
	}
	cout << count2+1 << endl;

	cout << endl;
	return 0;
}

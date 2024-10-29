#include <bits/stdc++.h>

using namespace std;

int main(){
	int count=0;
	string aux = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed est eros, vulputate eget sodales nec, malesuada vel ante. Quisque volutpat risus in dolor sollicitudin a commodo libero suscipit. Nunc ultrices risus ut arcu hendrerit aliquet. Integer sit amet eros eu augue porttitor dictum. Quisque vel ante est, at lacinia tortor. Curabitur lacus purus, malesuada sit amet dapibus ac, placerat id leo. Nullam vel ultrices augue. Donec posuere convallis purus, sit amet imperdiet leo laoreet at. Quisque aliquam, urna non interdum lobortis, leo diam tincidunt lectus, non ultricies quam purus eget quam.";

	while(aux[count] != '\0'){
		count++;
	}

	cout << "Count: " << count << endl;
	
	return 0;
}

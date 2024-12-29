#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[2]){
  if(argc != 2){
    cout << "Erro! Compile assim: $ ./conversorBinDec n" << endl;
    exit(1);
  }

	vector<int> v;

	long long n = atoi(argv[1]);
	int div, q;
	div = n;
	while(q > 1){
		while(div >= 1 || div >= 0){
			div -= 2;
      //cout << "div: " << div << endl;
		}		
		v.push_back(div+2);
    //cout << "div+2: " << div+2 << endl;
		q = (n - (div+2))/2;
    //cout << "q: " << q << endl;
		
		n = q;
		div = n;
    //cout << "n: " << q << endl;
    //cout << "div(ultima): " << div << endl;
	}
	v.push_back(q);

	reverse(v.begin(), v.end());

	for(int e : v)
		cout << e;

	cout << endl;
	return 0;
}

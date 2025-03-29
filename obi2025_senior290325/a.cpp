//Lencol
#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int a1, b1, a2, b2, a, b;

	cin >> a1 >> b1 >> a2 >> b2 >> a >> b;

	(a1*b1 + a2*b2) >= a*b ? cout << "S" << endl : cout << "N" << endl;

	cout << endl;
	return 0;
}

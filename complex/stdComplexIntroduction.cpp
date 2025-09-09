#include <iostream>
#include <complex>
#include <cmath>

using namespace std;

int main(){
	complex<double> z1;
	cout << z1 << endl;

	complex<double> z2(1.2, 6.5);
	cout << z2 << endl;

	complex<int> z3(1, 4);
	cout << z3 << endl;

	cout << z1 + z1 << endl;
	cout << z1 * z1 << endl;
	cout << z1 / z1 << endl;

	complex<double> z4(3.1, 4.4);
	auto z5 = z4;
	cout << z5 << endl;

	cout << real(z5) << endl;
	cout << imag(z5) << endl;
	cout << abs(z5) << endl;
	cout << norm(z5) << endl;
	cout << arg(z5) << endl;
	cout << conj(z5) << endl;

	cout << exp(z5) << endl;
	cout << log(z5) << endl;
	cout << sin(z5) << endl;
	cout << cos(z5) << endl;
	cout << tan(z5) << endl;
	cout << pow(z5, 2) << endl;
	cout << sqrt(z5) << endl;

	cout << endl;
	return 0;
}

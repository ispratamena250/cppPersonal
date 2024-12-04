#include <iostream>
#include <bitset>

int main(){
	int n = 3;

	std::cout << std::dec << n << std::endl;
	std::cout << std::hex << n << std::endl;
	std::cout << std::oct << n << std::endl;
	std::cout << std::bitset<20>(n) << std::endl;

	return 0;
}

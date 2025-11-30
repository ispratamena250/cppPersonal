#include <iostream>
#include <vector>

int main() {
	int count=33;
	std::vector<char> ascii(128);

	//Preenche o vetor
		for (int i = 0; i < 128; i++) {
			ascii[i] = static_cast<char>(i);
		}

	//Imprime índice e caractere
		for (int i = 0; i < 128; i++) {
			if(i >= 33 and i < 127){
				std::cout << count << " ";
				std::cout << std::hex << i << " : " << ascii[i] << std::endl;
				std::cout << std::dec;
				count++;
			}
		}

	return 0;
}


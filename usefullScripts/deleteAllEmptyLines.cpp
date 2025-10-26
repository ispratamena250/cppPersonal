#include <iostream>
#include <fstream>
#include <string>

int main() {
	std::string entrada = "o3.txt";
	std::string saida = "o5.txt";

	std::ifstream in(entrada);
	std::ofstream out(saida);

	if (!in.is_open()) {
		std::cerr << "Erro ao abrir o arquivo de entrada.\n";
		return 1;
	}

	if (!out.is_open()) {
		std::cerr << "Erro ao criar o arquivo de saída.\n";
		return 1;
	}

	std::string linha;
	while (std::getline(in, linha)) {
		//Remove espaços em branco no início e no fim
		size_t inicio = linha.find_first_not_of(" \t\r");
		size_t fim = linha.find_last_not_of(" \t\r");

		if (inicio != std::string::npos && fim != std::string::npos) {
			linha = linha.substr(inicio, fim - inicio + 1);
		} else {
			linha.clear();   //Linha contém apenas espaços
		}

		if (!linha.empty()) {
			out << linha << '\n';
		}
	}

	std::cout << "Arquivo '" << saida << "' criado sem as linhas em branco.\n";

	return 0;
}


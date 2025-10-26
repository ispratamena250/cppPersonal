#include <iostream>
#include <fstream>
#include <string>

int main() {
	int n;
	std::cout << "Digite um numero inteiro: ";
	std::cin >> n;

	//Nomes dos arquivos
	std::string nomeEntrada = "o7.txt";
	std::string nomeSaida = "o8.txt";

	std::ifstream entrada(nomeEntrada);
	std::ofstream saida(nomeSaida);

	if (!entrada.is_open()) {
		std::cerr << "Erro ao abrir o arquivo de entrada: " << nomeEntrada << "\n";
		return 1;
	}

	if (!saida.is_open()) {
		std::cerr << "Erro ao criar o arquivo de saída: " << nomeSaida << "\n";
		return 1;
	}

	std::string linha;
	int contador = 0;
	while (std::getline(entrada, linha)) {
		//Desconsidera o caractere de quebra de linha (\n), pois getline o remove
			if ((int)linha.size() != n) {
				saida << linha << '\n';
				contador++;
			}
	}

	std::cout << "Linhas diferentes de " << n << " caracteres foram salvas em '" << nomeSaida << "'. Total: " << contador << " linha(s).\n";

	return 0;
}


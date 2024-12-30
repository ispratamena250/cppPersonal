#include <iostream>
#include <fstream>

int main() { //Exemplo de dados: 1 2 3 4 5
    std::ifstream arquivo("numeros.txt");
    if (!arquivo.is_open()) {
        std::cerr << "Erro ao abrir o arquivo!" << std::endl;
        return 1;
    }

    int numero;
    while (arquivo >> numero) { // Lê números do arquivo
        std::cout << "Número lido: " << numero << std::endl;
    }

    arquivo.close();
    return 0;
}


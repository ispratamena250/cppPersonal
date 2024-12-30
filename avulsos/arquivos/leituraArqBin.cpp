#include <iostream>
#include <fstream>
#include <vector>

int main() { //Apenas um exemplo
    std::ifstream arquivo("dados.bin", std::ios::binary); // Abre em modo binário
    if (!arquivo.is_open()) {
        std::cerr << "Erro ao abrir o arquivo!" << std::endl;
        return 1;
    }

    std::vector<int> dados(5);
    arquivo.read(reinterpret_cast<char*>(dados.data()), dados.size() * sizeof(int)); // Lê os dados

    for (int i = 0; i < dados.size(); i++) {
        std::cout << "Valor " << i + 1 << ": " << dados[i] << std::endl;
    }

    arquivo.close();
    return 0;
}


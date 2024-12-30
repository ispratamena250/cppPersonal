#include <iostream>
#include <fstream>
#include <string>

int main() { //Apenas um exemplo
    std::ifstream arquivo("meuarquivo.txt"); // Abre o arquivo
    if (!arquivo.is_open()) { // Verifica se abriu corretamente
        std::cerr << "Erro ao abrir o arquivo!" << std::endl;
        return 1;
    }

    std::string linha;
    while (std::getline(arquivo, linha)) { // Lê linha por linha
        std::cout << linha << std::endl;   // Imprime a linha
    }

    arquivo.close(); // Fecha o arquivo
    return 0;
}


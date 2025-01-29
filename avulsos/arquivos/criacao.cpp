#include <iostream>
#include <fstream> // Biblioteca para manipulação de arquivos

int main() {
    std::ofstream arquivo("meuarquivo.txt"); // Cria ou abre um arquivo para escrita

    if (arquivo.is_open()) { // Verifica se o arquivo foi aberto corretamente
        arquivo << "Escrevendo no arquivo em C++!\n";
        arquivo << "Outra linha de texto.\n";
        arquivo.close(); // Fecha o arquivo
        std::cout << "Arquivo escrito com sucesso!\n";
    } else {
        std::cerr << "Erro ao abrir o arquivo!\n";
    }

    return 0;
}


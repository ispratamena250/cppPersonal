#include <iostream>
#include <fstream>

using namespace std;

int main() { //Exemplo de dados: 1 2 3 4 5
    ifstream arquivo("numeros.txt");
    if (!arquivo.is_open()) {
        cerr << "Erro ao abrir o arquivo!" << endl;
        return 1;
    }

    int numero;
    while (arquivo >> numero) { // Lê números do arquivo
        cout << "Número lido: " << numero << endl;
	getchar();
    }

    arquivo.close();
    return 0;
}


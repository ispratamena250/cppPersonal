#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
  ofstream arquivo("meuarquivo.txt");
  if(!arquivo.is_open()){
    cerr << "Erro ao abrir arquivo" << endl;
    exit(1);
  }

  arquivo << "Linha no arquvio";
  arquivo.close();

  ifstream arquivo_leitura("meuarquivo.txt");
  if(!arquivo_leitura.is_open()){
    cerr << "Erro ao abrir arquivo" << endl;
    exit(1);
  }

  string linha;
  while(getline(arquivo_leitura, linha))
    cout << linha << endl;

  arquivo_leitura.close();

  cout << endl;
  return 0;
}

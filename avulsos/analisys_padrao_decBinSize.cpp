/*
 * C++ program to process padrao_decSize_binSize_analisys.txt file
 * Antes de rodar, cheque o arquivo padrao_decSize_binSize_analisys.txt
 *
 * Conclusões:
 * Ao tratar o arquivo, percebe-se que, em uma sequência de conversões decimais para binário,
 * a quantidade de bits das representações binárias crescentes dos números naturais cresce 
 * de forma que há uma representação binária com 1 bit, depois há duas representações com 2 bits,
 * depois há três representações com 3 bits, e assim sucessivamente. E, ao obervar o histograma dessas
 * quantidades, percebe-se que os elementos seguem a ordem crescente dos números naturais.
 * Portanto, a quantidade de bits das representações binárias crescentes dos números naturais é uma PG.
 *
 * Observação: 
 * O arquivo tratado foi tirado de /estudoC/elipticas no programa decSize_binSize_analisys.c
 * */

#include <iostream>
#include <fstream>
#include <set>
#include <string>
#include <map>

using namespace std;

void fileSemBarraN();
void fileComBarraN();
map<char, int> hist(const string& s);

int main(){
  //fileComBarraN();
  fileSemBarraN();

  cout << endl;
  return 0;
}

void fileSemBarraN(){
  ifstream arquivo("padrao_decSize_binSize_analisys.txt");
  if(!arquivo.is_open()){
    cerr << "Erro ao abrir padrao_decSize_binSize_analisys.txt" << endl;
    exit (1);
  }

  string linha;
  while(getline(arquivo, linha)){
    cout << "Linha lida" << endl;
  }
  
  map<char, int> h = hist(linha);
  for(const auto& e : h)
    cout << e.first << ":" << e.second << endl;

  arquivo.close();
}

void fileComBarraN(){
  set<int> vs;

  ifstream arquivo("padrao_decSize_binSize_analisys.txt");
  if(!arquivo.is_open()){
    cerr << "Erro ao abrir padrao_decSize_binSize_analisys.txt" << endl;
    exit (1);
  }

  int n;
  while(arquivo >> n){
    vs.insert(n);
  }

  for(auto e : vs)
    cout << e << endl;

  arquivo.close();
}

map<char, int> hist(const string& s){
  map<char, int> h;

  for(auto e : s)
    ++h[e];

  return h;
}

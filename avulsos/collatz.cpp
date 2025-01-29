/*
 *  C++ program to analise the Collatz Conjecture
 *  Compile: $ g++ -Wall collatz.cpp -o collatz.x
 *  Run: $ ./collatz.x z
 * */

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <fstream>

using namespace std;

int main(int argc, char *argv[2]){
  if(argc != 2){
    cerr << "Error! Run: $ ./collatz.x i" << endl;
    exit(1);
  }

  FILE *gnuplotPipe = popen("gnuplot -persistent", "w");
  if(!gnuplotPipe){
    cerr << "Error on openning Gnuplot pipe" << endl;
    exit(1);
  }

  int count=0;

  ofstream file("dados_collatz.txt");

  if(file.is_open()){
    for(int i=1; i<=atoi(argv[1]); i++){
      int aux = i;
      while(aux){
        if(aux == 1){
          break;
        }else if(aux%2 == 0){
          aux = aux/2;
          count++;
        }else if(aux%2 != 0){
          aux = 3*aux + 1;
          count++;
        }
      }
      cout << i << " " << count << endl;
      file << i << "\t" << count << endl;
      count = 0;
    }
    file.close();
  }else{
    cerr << "Error on openning dados_collatz.txt" << endl;
    exit(1);
  }

  fprintf(gnuplotPipe, "set xlabel 'Números'\n");
  fprintf(gnuplotPipe, "set ylabel 'Quantidade de números gerados'\n");
  fprintf(gnuplotPipe, "set title 'Análise da quantidade de números gerados na Conjectura de Collatz para cada número'\n");
  fprintf(gnuplotPipe, "plot 'dados_collatz.txt' u 1:2 w lines lc rgb 'red' notitle\n");

  pclose(gnuplotPipe);

  cout << endl;
  return 0;
}

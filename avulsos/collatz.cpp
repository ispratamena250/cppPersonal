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
    cerr << "Error! Run: $ ./collatz.x z" << endl;
    exit(1);
  }

  FILE *gnuplotPipe = popen("gnuplot -persistent", "w");
  if(!gnuplotPipe){
    cerr << "Error on openning Gnuplot pipe" << endl;
    exit(1);
  }

  long long z = atoi(argv[1]);
  int count=0;

  ofstream file("dados_collatz.txt");

  if(file.is_open()){
    while(true){
      if(z == 1){
        count++;
        break;
      }else if(z%2 == 0){
        z = z/2;
        count++;
        file << count << "\t" << z << endl;
      }else if(z%2 != 0){
        z = 3*z + 1;
        count++;
        file << count << "\t" << z << endl;
      }
    }
    file.close();
  }else{
    cerr << "Error on openning dados_collatz.txt" << endl;
    exit(1);
  }

  fprintf(gnuplotPipe, "set xlabel 'Números'\n");
  fprintf(gnuplotPipe, "set ylabel 'Quantidade de numeros gerados'\n");
  fprintf(gnuplotPipe, "set title 'Analise da quantidade de numeros geradas na conjectura de Collatz para cada numero'\n");
  fprintf(gnuplotPipe, "plot 'dados_collatz.txt' u 1:2 w lines lc rgb 'red' notitle\n");

  pclose(gnuplotPipe);

  cout << endl;
  return 0;
}

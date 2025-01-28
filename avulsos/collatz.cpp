#include <iostream>

using namespace std;

int main(){
  srand(time(NULL));
  int n = rand()%1000;
  int aux = n;
  int count=0;

  cout << n << endl;
  while(true){
    if(n == 1){
      count++;
      break;
    }else if(n%2 == 0){
      n = n/2;
      count++;
      cout << n << endl;
    }else if(n%2 != 0){
      n = 3*n + 1;
      cout << n << endl;
      count++;
    }
  } 
  cout << "Primeiro: " << aux << " Quantidade: " << count;

  cout << endl;
  return 0;
}

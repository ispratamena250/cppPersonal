/*
 * C++ program that analise the following sums: 
 * 1) a + b, whare a and b are always evens
 * 2) c + (d + e), where c, d, and e are always odds
 * Is 1) always even? And is 2) always odd?
 * 
 * Compile: $ g++ -Wall somasImpares_Pares.cpp -o somasImpares_Pares.x
 * Run: $ ./somasImpares_Pares.x
 * */

#include <iostream>

using namespace std;

int main(){ 
  int o, e; //Odds and evens

  for(int i=1; i<=50; i++){
    if(i % 2 == 0){
      e = i + (i+2);
      if(e % 2 == 0){
        cout << i << " + " << i+2 << " = " << e << " Par!" << endl;
      }else{
        cout << i << " + " << i+2 << " = " << e << " Impar!" << endl;
      }
      e = 0;
    }else{
      o = i + ((i+2) + (i+4));
      if(o % 2 != 0 ){
        cout << i << " + " << i+2 << " + " << i+4 << " = " << o << " Impar!" << endl;
      }else{
        cout << i << " + " << i+2 << " + " << i+4 << " = " << o << " Par!" << endl;
      }
    }
      o = 0;
  }

  cout << endl;
  return 0;
}

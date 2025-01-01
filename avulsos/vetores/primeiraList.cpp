#include <iostream>
#include <list>
#include <iterator>

using namespace std;

//Assinatura
void mostrarLista(list<int> l);

int main(){
  list<int> l1, l2;

  for(int i=0; i<5; i++){
    l1.push_back(i*2);
    l2.push_back(i*3);
  }

  mostrarLista(l1);
  cout << endl;
  mostrarLista(l2);

  cout << endl;
  return 0;
}

void mostrarLista(list<int> l){
  list<int>::iterator z;

  for(z = l.begin(); z != l.end(); z++){
    cout << *z << " ";
  }
}

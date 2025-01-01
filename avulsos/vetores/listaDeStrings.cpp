#include <iostream>
#include <list>
#include <iterator>

using namespace std;

//Assinatura
void mostrarLista(list<string> l);

int main(){
  list<string> l1, l2;

  for(int i=0; i<3; i++){
    string aux1;
    cin >> aux1;
    string aux2;
    cin >> aux2;

    l1.push_back(aux1);
    l2.push_back(aux2);
  }
  
  cout << endl;
  mostrarLista(l1);
  cout << endl;
  mostrarLista(l2);

  cout << endl;
  return 0;
}

void mostrarLista(list<string> l){
 list<string>::iterator z;

 for(z=l.begin(); z!=l.end(); z++){
   cout << *z << " " << endl;
 }
}

#include <iostream>
#include <string>

using namespace std;

int occurences(const string& P, const string& S);

int main(){
  string P = "Deitado eternamente oc em berco oc esplendido";
  string S = "oc";

  cout << occurences(P, S) << endl; 

  cout << endl;
  return 0;
}

int occurences(const string& P, const string& S){
  int m = P.size();
  int n = S.size();
  int occ = 0;

  for(int i=0; i<n-m; i++){
    occ += (P == S.substr(i, m) ? 1 : 0);
  }

  return occ;
}

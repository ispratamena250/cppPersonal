#include <bits/stdc++.h>

using namespace std;

int main(){
  vector<string> v;
  vector<int> vSize;
  int z;

  cin >> z;

  for(int i=0; i<z; i++){
    string aux;
    cin >> aux;
    v.push_back(aux); //Vetor de strings
    vSize.push_back(aux.size()); //Vetor
  }

  sort(vSize.begin(), vSize.end());

  for(int i=0; i<z; i++){ //vSize
    for(int j=0; j<z; j++){ //v
      int aux = v[j].size();
      if(aux == vSize[i]){
        cout << v[j];
      }
    }
  }

  cout << endl;
  return 0;
}

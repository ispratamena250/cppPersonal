#include <bits/stdc++.h>

using namespace std;

int occurences_changedBitStep(const string& P, const string& S);

int main(){
  string a, b = "WUB";
  cin >> a;

  cout << occurences_changedBitStep(b, a) << endl; 

  cout << endl;
  return 0;
}

int occurences_changedBitStep(const string& P, const string& S){
  size_t m = P.size();
  size_t n = S.size();
  int occ=0;
  vector<int> v;

  for(size_t i=0; i<=n-m; i++){
    if(P == S.substr(i, m)){
      occ++;
      //cout << i << endl;
      v.push_back(i);
    }
  }

  for(size_t i=0; i<S.size(); i++){
    for(size_t j=0; j<v.size(); j++){
      size_t aux = v[j];
      if(i < aux or i >= aux + m){
        cout << S[i];
        break;
      }
    }
  }

  cout << endl;
  return occ;
}

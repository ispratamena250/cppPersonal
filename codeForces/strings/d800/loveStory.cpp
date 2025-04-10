#include <bits/stdc++.h>

using namespace std;

void compara(string s);

int main(){
  int t;
  vector<string> v;

  cin >> t;
  for(int i=0; i<t; i++){
    string aux;
    cin >> aux;
    v.push_back(aux);
  }

  for(string e : v)
    compara(e);

  cout << endl;
  return 0;
}

void compara(string s){
  int count=0;
  string c = "codeforces";

  for(size_t i=0; i<c.size(); i++){
    if(c[i] != s[i])
      count++;
  }
  cout << count << endl;
}

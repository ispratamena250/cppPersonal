#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, q;

  cin >> n >> q;
  vector<int> v(n, ' ');
  
  for(int i=0; i<q; i++){
    string s;
    cin >> s;
    int aux = atoi(s);
    cout << aux;
  }

  cout << endl;
  return 0;
}


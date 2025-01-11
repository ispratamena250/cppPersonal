#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, d;

  cin >> n >> d;
  int m[n][2];
  int dif = n - d;
  vector<int> v;

  for(int t=0; t<n; t++){
    for(int l=0; l<2; l++){
      cin >> m[t][l];
    }
  }

  for(int t=0; t<n; t++){
    for(int l=0; l-dif<2; l++){
      if(l==1){
        m[t][l] = m[t][l]+1;
        //v.push_back(m[t][l]*m[t][l+1]);
        v.push_back(m[t][l]);
      }
    }
  }

  for(int i=0; i<n; i++){
    cout << endl;
    for(int j=0; j<2; j++){
      cout << m[i][j] << " ";
    }
  }

  sort(v.begin(), v.end());
  cout << dif << endl;
  for(auto e : v){
    cout << e << " ";
  }

  cout << endl;
  return 0;
}

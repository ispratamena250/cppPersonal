#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, m;

  cin >> n >> m;

  //string s[n][n];
  string t[m][m];
  string u[n][n];

  /*for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      cin >> s[i][j];
    }
  }*/
  for(int i=0; i<m; i++){
    for(int j=0; j<m; j++){
      cin >> t[i][j];
    }
  }

  for(int i=0; i<m; i++){
    cout << endl;
    for(int j=0; j<m; j++){
      cout << t[i][j];
    }
  }

  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      if(i <= m or j <= m){
        u[i][j] = t[i][j];
      }else if(i > m or j > m){
        u[i][j] = "w";
      }
    }
  }

  for(int i=0; i<n; i++){
    cout << endl;
    for(int j=0; j<n; j++){
      cout << u[i][j];
    }
  }


  cout << endl;
  return 0;
}

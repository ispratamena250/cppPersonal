#include <bits/stdc++.h>

using namespace std;

int main(){
  string s;

  cin >> s;

  for(size_t i=0; i<s.size(); i++){
    if(s[i] == '2'){
      cout << s[i];
    }
  } 

  cout << endl;
  return 0;
}

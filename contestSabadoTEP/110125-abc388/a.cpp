#include <bits/stdc++.h>

using namespace std;

int main(){
  string s;
  cin >> s;

  for(size_t i=0; i<s.size(); i++){
    if(i==0)
      cout << s[i] << "UPC";
  }

  cout << endl;
  return 0;
}

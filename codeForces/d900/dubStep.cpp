#include <bits/stdc++.h>

using namespace std;

int main(){
  string a, b = "WUB";
  cin >> a;

  size_t goalPos = a.find(b);

  for(size_t i=0; i<a.size(); i++){
    if(i < goalPos || i >= goalPos + b.size()){
      cout << a[i];
    }
  }

  cout << endl;
  return 0;
}

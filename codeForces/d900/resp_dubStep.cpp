#include <iostream>
#include <vector>

using namespace std;

int main() {
  string s;
  int flag=1;
  vector<int> v, v2, v2i, v3;

  cin >> s;

  for(size_t i=0; i<s.size(); i++){
    if(s[i]=='W' and s[i+1]=='U' and s[i+2]=='B'){
      v2i.push_back(i);
      i+=2;
      v2.push_back(i);
      if(!flag){
        cout << " ";
        v.push_back(!flag);
      }
      continue;
    }else {
      flag=0;
      cout << s[i];
    }
    v3.push_back(i);
  }

  cout << endl;
  for(auto e : v)
    cout << e << " ";

  cout << endl;
  for(auto e : v2)
    cout << e << " ";

  cout << endl;
  for(auto e : v2i)
    cout << e << " ";

  cout << endl;
  for(auto e : v3)
    cout << e << " ";

  cout << endl;
  return 0;
}

#include <iostream>
#include <vector>

using namespace std;

int main() { //Bom exemplo: WUBABCWUBDEFWUBWUB
  string s;
  int flag=1;

  cin >> s;

  for(size_t i=0; i<s.size(); i++){
    cout << "flag1: " << flag << endl;
    if(s[i]=='W' and s[i+1]=='U' and s[i+2]=='B'){
      i+=2;
      if(!flag){
        cout << "!flag: " << !flag << endl;
        cout << " ";
      }
      continue;
    }else {
      flag=0;
      cout << s[i] << " -> ";
    }
    cout << "flag2: " << flag << endl;
  }

  cout << endl;
  return 0;
}

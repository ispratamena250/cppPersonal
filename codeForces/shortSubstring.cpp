#include <bits/stdc++.h>

using namespace std;

void guess(string e);

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

  int z;
  vector<string> s;
  cin >> z;

  for(int i=0; i<z; i++){
    string aux;
    cin >> aux;
    s.push_back(aux);
  }

  for(auto e : s)
    guess(e);

	cout << endl;
	return 0;
}

void guess(string e){
  for(size_t i=0; i<e.size(); i++){
    if(i == 0){
      cout << e[i];
    }else if(e.size() > 2 and i%2 == 0){
      cout << e[i];
    }else if(i == e.size()-1){
      cout << e[i];
    }
  }
  cout << endl;
}

#include <bits/stdc++.h>

using namespace std;

int main(){
  vector<int> v, vsort;
  set<int> v2;
  int count=0, aux1=0, aux2=0, aux3=0, aux4=0;

  for(int i=0; i<5; i++){
    int aux;
    cin >> aux;
    v.push_back(aux);
  }

  for(int i=1; i<=5; ++i){
    v2.insert(v[i-1]);
    if(v[i-1] != i){
      count++;
      if(count == 1){
        aux1 = v[i-1];
        v2.insert(aux1);
        aux2 = i;
      }else if(count == 2){
        aux3 = v[i-1];
        v2.insert(aux3);
        aux4 = i;
      }
    }
  } 

  for(auto e : v2){
    vsort.push_back(e);
  }

  if(count == 0){
    cout << "No";
  }else if(count == 2 and aux1 == aux4 and aux2 == aux3 and is_sorted(vsort.begin(), vsort.end())){
    cout << "Yes";
  }else if(count == 2 and aux1 != aux4 and aux2 != aux3){
    cout << "No";
  }else if(aux1 != aux4 and aux2 != aux3){
    cout << "No";
  }else if(count == 0 and is_sorted(vsort.begin(), vsort.end())){
    cout << "No";
  }else if(count == 2 and aux1 != aux4 and aux2 != aux3 and is_sorted(vsort.begin(), vsort.end())){
    cout << "No";
  }else if(count == 2 and aux1 != aux4 and aux2 != aux3 and !is_sorted(vsort.begin(), vsort.end())){
    cout << "No";
  }else if(count == 0 and aux1 != aux4 and aux2 != aux3){
    cout << "No";
  }else if(count == 0 and !is_sorted(vsort.begin(), vsort.end())){
    cout << "No";
  }else if(count > 2 or count < 2){
    cout << "No";
  }else if(count > 2 and is_sorted(vsort.begin(), vsort.end())){
    cout << "No";
  }

  cout << endl;
  return 0;
}

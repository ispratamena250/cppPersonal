#include <bits/stdc++.h>

using namespace std;

int main(){
     int n;
     string s;
     string vs1;
     string vs2;

     cin >> n;

     for(int i=0; i<n; i++){
          char aux;
          cin >> aux;
          s.push_back(aux);
     }

     if(s.size() % 2 == 0){
          for(size_t i=0; i<s.size()/2; i++){ 
               vs1.push_back(s[i]);
          }          
          for(size_t j=s.size()/2; j<s.size(); j++){ 
               vs2.push_back(s[j]);
          }
          
          sort(vs1.begin(), vs1.end());
          sort(vs2.begin(), vs2.end());
          vs1 == vs2 ? cout << "Sim" << endl : cout << "Nao" << endl; 
     }else{
          for(size_t i=0; i<(s.size()-1)/2; i++){
               vs1.push_back(s[i]);
          }
          for(size_t j=((s.size()-1)/2)+1; j<s.size(); j++){
               vs2.push_back(s[j]);
          }

          sort(vs1.begin(), vs1.end());
          sort(vs2.begin(), vs2.end());
          vs1 == vs2 ? cout << "Sim" << endl : cout << "Nao" << endl;
     }

     cout << endl;
     return 0;
}

/*
 * Código que compara duas strings, ou mais!
 * Compile assim: $ g++ -Wall rollingHash1.cpp -o rollingHash1.x
 * */

#include <iostream>
#include <string>

using namespace std;

int h(const string& s);
int f(const char c);

int main(int argc, char *argv[3]){
  if(argc != 3){
    cout << "Erro! Rode assim: $ ./rollingHash1.x s1 s2" << endl;
    exit(1);
  }

  string s1 = argv[1];
  string s2 = argv[2]; 
  
  cout << h(s1) << endl;
  cout << h(s2) << endl; 

  (h(s1) != h(s2)) ? cout << "d" : cout << "i";

  cout << endl;
  return 0;
}

int h(const string& s){
  long long ans=0, p=53, q=1'000'000'007;
  
  for(auto c : s){
    ans = (ans * p) % q;
    ans = (ans + f(c)) % q;
  }

  return ans;
}

int f(const char c){ 
  return c - 'a' + 1;
}

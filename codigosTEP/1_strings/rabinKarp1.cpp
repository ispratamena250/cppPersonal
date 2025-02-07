#include <bits/stdc++.h>

using namespace std;

//Assinaturas
int rabin_karp(const string& s, const string& p);
int h(const string& s);
int f(char c);

int main(){
  auto s = "ababababababa", p = "aba";
  auto s1 = "trespratosdetrigoparatrestigrestristes", p1 = "tr";

  cout << rabin_karp(s, p) <<endl;
  cout << rabin_karp(s1, p1) <<endl;

  return 0;
}

int rabin_karp(const string& s, const string& p){
  int n = s.size(), m = p.size(), occ = 0, hp = h(p); 

  for (int i = 0; i <= n - m; i++){
    auto b = s.substr(i, m);
    occ += (h(b) == hp && b == p) ? 1 : 0;
  }

  return occ;
}

int h(const string& s){
  long long ans = 0, p = 31, q = 1000000007;

  for (auto it = s.rbegin(); it != s.rend(); ++it){
    ans = (ans * p) % q;
    ans = (ans + f(*it)) % q;
  }

  return ans;
}

int f(char c){
  return c - 'a' + 1;
}

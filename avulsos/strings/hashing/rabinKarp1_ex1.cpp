#include <iostream>
#include <string>

using namespace std;
using ll = long long;

int rabinKarp(const string& s, const string& p);
int h(const string& s);
int f(char c);

int main(){
  string s = "WUBWUBABCWUB";
  cout << s.size() << endl;
  string p = "WUB";

  cout << rabinKarp(s, p);

  cout << endl;
  return 0;
}

int rabinKarp(const string& s, const string& p){
  int n = s.size(), m = p.size(), hp = h(p), count=0;

  for(int i=0; i<=n-m; i++){
    string b = s.substr(i, m);
    count++;
    if(h(b) == hp and b == p){
      cout << b << " ";
    };
  }

  return count;
}

int h(const string& s){
  ll ans = 0, p = 31, q = 1000000007;

  for(auto it = s.rbegin(); it != s.rend(); it++){
    ans = (ans * p) % q;
    ans = (ans + f(*it)) % q;
  }

  return ans;
}

int f(char c){
  return c - 'a' + 1;
}

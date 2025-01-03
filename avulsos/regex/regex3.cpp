#include <iostream>
#include <regex>

using namespace std;

void PrintMatches(string s, regex reg);
void PrintMatches2(string s, regex reg);

int main(){
  string s = "The ape was at the apex";
  regex reg("(ape[^ ]?)"); //Procurando tudo o que é 'ape' e o que não é 'space'
 
  PrintMatches(s, reg);
  
  string s2 = "I picked the pickle";
  regex reg2("(pick([^ ]+)?)");
  PrintMatches2(s, reg2);

  cout << endl;
  return 0;
}

void PrintMatches2(string s, regex reg){
  sregex_iterator currentMatch(s.begin(), s.end(), reg);
  sregex_iterator lastMatch;

  while(currentMatch != lastMatch){
    smatch m = *currentMatch;
    cout << m.str() << endl;
    currentMatch++;
  }
  cout << endl;
}

void PrintMatches(string s, regex reg){
  smatch m;
  cout << boolalpha;
  
  while(regex_search(s, m, reg)){
    cout << m.str(1) << endl;
    s = m.suffix().str();
    cout << endl;
  }
}

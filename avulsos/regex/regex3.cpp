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
  PrintMatches2(s2, reg2);

  string s3 = "Cat rat mat fat pat";
  regex reg3("([crmfp]at)");
  PrintMatches2(s3, reg3);

  regex reg4("([C-Fc-f]at)");
  PrintMatches2(s3, reg4);

  regex reg5("([^Cr]at)");
  PrintMatches2(s3, reg5);

  regex reg6("([Cr]at)"); //replace
  string replaceS = regex_replace(s3, reg6, "Coisa");
  cout << replaceS << endl;

  string s4 = "F.B.I. I.R.S. CIA";
  regex reg7("([A-Z]\\.[A-Z]\\.[A-Z])");
  PrintMatches2(s4, reg7);

  string s8 = "This is a\n multiline string\n" "that has many lines";
  regex reg8("\n");
  string noLBStr = regex_replace(s8, reg8, " ");  
  cout << noLBStr << endl;

  string s9 = "12345";
  regex reg9("\\d");
  PrintMatches2(s9, reg9);

  string s10 = "123 12345 123456 1234567";
  regex reg10("\\d{5,7}");
  PrintMatches2(s10, reg10);

  string s11 = "412-867-5309";
  regex reg11("\\w{3}-?\\w{3}-\\w{4}");
  PrintMatches2(s11, reg11);

  string s12 = "Toshio Muramatsu";
  regex reg12("\\w{2,20}\\s\\w{2,20}");
  PrintMatches2(s12, reg12);

  string s13 = "a as ape and bug";
  regex reg13("a[a-z]+");
  PrintMatches2(s13, reg13);

  

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

#include <iostream>
#include <regex>

using namespace std;

void out(bool b);

int main(){
	regex reg1("<.*>.*</.*>");
	bool found = regex_match("<tag>value</tag>", reg1);
	out(found);

  //Define que a primeira expressão <(.*)> deve ser igual a segunda
  //referenciada em </\\1>.
  //regex reg2("<(.*)>.*</\\1>");
  regex reg2(R"(<(.*)>.*</\1>)"); //Raw string
  found = regex_match("<tag>value</taw>", reg2);
  out(found);

  regex reg3("<\\(.*\\)>.*</\\1>", regex_constants::grep);
  found = regex_match("<tag>value</tag>", reg3);
  out(found);

  found = regex_match("<tag>value</tag>", regex("<(.*)>.*</\\1>"));
  out(found);

  found = regex_match("XML tag: <tag>value</tag>", regex("<(.*)>.*</\\1>"));
  out(found);
  
  found = regex_match("XML tag: <tag>value</tag>", regex(".*<(.*)>.*</\\1>.*"));
  out(found);

  found = regex_search("XML tag: <tag>value</tag>", regex("<(.*)>.*</\\1>"));
  out(found);

  found = regex_search("XML tag: <tag>value</tag>", regex(".*<(.*)>.*</\\1>.*"));
  out(found);

	return 0;
}

void out(bool b){
	cout << (b ? "found" : "not found") << endl;
}

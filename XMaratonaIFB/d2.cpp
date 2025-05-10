#include<iostream>
#include<string>

using namespace std;

//Prototypes
string ul(string s);

int main(){
	string s, ul_var, sub, sub2;

	getline(cin, s); //read an entire line

	ul_var = ul(s); //putting in lower case

	size_t pos = ul_var.find("daniel sad ");
	for(size_t i=pos; i<=pos+6; i++)
		sub.push_back(s[i]);

	if(pos != std::string::npos){
		size_t pos2 = ul_var.find("sad");
		for(size_t i=pos2; i<=pos2+2; i++)
			sub2.push_back(s.at(i));

	}

	if(pos != std::string::npos){
		for(size_t i=0; i<s.size(); i++){
			size_t aux=0;
			if(i != pos and i >= aux){
				cout << s.at(i);
			}
			else if(i == pos){
				i+=9;	
				aux = i;
				cout << sub;
				for(size_t j=0; j<sub2.size(); j++){
					cout << sub2.at(j);
					if(sub2.at(j) == 'a')
						cout << 'a';
					else if(sub2.at(j) == 'A')
						cout << 'A';

				}
			}
		}
	}else{
		cout << s;
	}

	cout << endl;
	return 0;
}

string ul(string s){
	string result;

	for(size_t i=0; i<s.size(); i++){
		if(s[i] >= 'A' and s[i] <= 'Z'){
			s[i] = s[i] - ('A' - 'a');
			result.push_back(s[i]);
		}else if(s[i] >= 'a' and s[i] <= 'z'){
			result.push_back(s[i]);
		}else{
			result.push_back(s[i]);
		}
	}

	return result;
}

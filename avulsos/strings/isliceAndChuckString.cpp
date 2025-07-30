#include <iostream>
#include <string>

using namespace std;

bool isPhoneNumber(string text){
	if(text.size() != 12)
		return false;

	for(int i=0; i<3; i++)
		if(!(text.at(i) >= 48 and text.at(i) <= 57))
			return false;

	if(text.at(3) != '-')
		return false;

	for(int i=4; i<7; i++)
		if(!(text.at(i) >= 48 and text.at(i) <= 57))
			return false;

	if(text.at(7) != '-')
		return false;

	for(int i=8; i<12; i++)
		if(!(text.at(i) >= 48 and text.at(i) <= 57))
			return false;

	return true;
}

int main(){
	string message = "Call me at 415-555-1011 tomorrow. 415-555-9999 is my office", chunk;

	for(size_t i=0; i<message.size(); i++){
		string chunk = message.substr(i, 12);
		if(isPhoneNumber(chunk)){
				cout << "Phone number found: " << chunk << endl;
		}
	}
	cout << "Done" << endl;

	cout << endl;
	return 0;
}

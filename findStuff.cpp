/*
 * This is for finding a file in a 'ls' command output
 * */

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, char *argv[2]){
	if(argc != 2){
		cout << "Error. Run: ./findStuff <argument>" << endl;
		return 1;
	}

	string fileName = "/home/isaac/Documents/Anotacoes/findStuff_input.txt";
	ifstream file1(fileName);
	if(not file1.is_open()){
		ofstream newFile (fileName);
		newFile.close();
		file1.open(fileName);
	}

	string s = argv[1], line;

	int linesNum = 0;
	bool found = false;

	while(getline(file1, line)){
		linesNum++;
		if(line.find(s) != string::npos){
			cout << "Encontrado: linha " << linesNum << " -> " << line << endl;
			found = true;
		}
	}

	if(not found)
		cout << "Nao encontrado" << endl;
	
	cout << endl;
	return 0;
}

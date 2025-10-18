/*
 * This is used with locate command. Do '$ locate <string>' and send it's output to a fileName1 and run this
 * script with a string as target. If option is 1, fileName2 is gonna have all occurences of the string,
 * if option is 2, fileName2 is gonna have all ocurrences diferent from string target.
 *
 * Compile: $ g++ -Wall findElementWithLocateCommand.cpp -o findElementWithLocateCommand.x
 * Run: $ ./findElementWithLocateCommand.x <fileName1> <fileName2> "<stringTarget>"
 * */
#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <filesystem>

using namespace std;

int main(int argc, char *argv[]){
	if(argc != 4){
		cerr << "Error. Run: $ ./findElementWithLocateCommand.x <fileName1> <fileName2> \"<stringTarget>\"" << endl;
		return EXIT_FAILURE;
	}

	int op=0;
	cout << "1 - find all occurences\n2 - find all non occurences\nOption: ";
	cin >> op;
	if(op != 1){
		if(op != 2){
			cerr << "Invalid option" << endl;
			return EXIT_FAILURE;
		}
	}

	string f1 = argv[1];
	cout << "File1: " << f1 << endl;
	string f2 = argv[2];
	cout << "File2: " << f2 << endl;

	if(f1 == f2){
		cerr << "Iquals names!" << endl;
		return EXIT_FAILURE;
	}

	ifstream file1(f1);
	if(!file1.is_open()){
		cerr << "Error on oppening file1" << endl;
		return EXIT_FAILURE;
	}

	ofstream file2(f2);

	string line;
	string target = argv[3];
	cout << "Target: "<< target << endl;
	while(getline(file1, line)){
		size_t found = line.find(target);
		if(op == 1){
			if(found != std::string::npos){
				file2 << line << endl;
			}
		}else{
			if(found == std::string::npos){
				file2 << line << endl;
			}
		}
	}

	file2.close();

	//Counting lines
	ifstream file3(f2);
	if(!file3.is_open()){
		cerr << "Error on openning file2" << endl;
		return EXIT_FAILURE;
	}

	int count = 0;
	//rewind(file1);
	file1.clear();
	file1.seekg(0, ios::beg);
	while(getline(file1, line)){
		count++;
	}
	cout << "Lines in file "<< f1 << ": " << count << endl;

	count = 0;
	while(getline(file3, line)){
		count++;
	}
	cout << "Lines in file " << f2 << ": " << count << endl;

	file1.close();
	file3.close();

	//Open fileName1
	std::filesystem::path filePath1 = argv[1];
	if(!std::filesystem::exists(filePath1)){
		cerr << "fileName1 dosen't exists." << endl;
		return EXIT_FAILURE;
	}
	string command1 = "open " + filePath1.string();
	int res1 = system(command1.c_str());
	if(res1 != 0){
		cerr << "Error on openning fileName1" << endl;
		return EXIT_FAILURE;
	}
	cout << "Openning fileName1..." << endl;

	//Open fileName2
	std::filesystem::path filePath2 = argv[2];
	if(!std::filesystem::exists(filePath2)){
		cerr << "fileName2 dosen't exists." << endl;
		return EXIT_FAILURE;
	}
	string command2 = "open " + filePath2.string();
	int res2 = system(command2.c_str());
	if(res2 != 0){
		cerr << "Error on openning fileName2" << endl;
		return EXIT_FAILURE;
	}
	cout << "Openning fileName2..." << endl;

	cout << endl;
	return 0;
}

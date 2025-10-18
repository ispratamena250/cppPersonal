/*
 * This find a desired file in directory and says how many times it was found. Usefull for ls command.
 * Compile: $ g++ -Wall findElementInDirectory.cpp -o findElementInDirectory.x
 * Run: $ ./findElementInDirectory.x "<name>"
 * */
#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <filesystem>

using namespace std;

int createFile();
int findElement(string target);
int deleteFile();

int main(int argc, char *argv[]) {
	if(argc != 2){
		cerr << "Error. Run: $ ./findElementInDirectory.x \"<name>\"" << endl;
		return EXIT_FAILURE; 
	}

	string target = argv[1];

	createFile();

	findElement(target);

	deleteFile();

	return 0;
}

int createFile(){
	ofstream file1("output1_findElementInDirectory.txt");
	if(!file1.is_open()){
		cerr << "Error on creating file" << endl;
		return EXIT_FAILURE;
	}

	FILE *pipe = popen("ls -1", "r");
	if(!pipe){
		cerr << "Error on openning pipe" << endl;
		return EXIT_FAILURE;
	}

	char buffer[500];
	while(fgets(buffer, sizeof(buffer), pipe) != nullptr){
		file1 << buffer << endl;
	}

	file1.close();
	pclose(pipe);

	return 0;
}

int findElement(string target){
	ifstream file2("output1_findElementInDirectory.txt");
	if(!file2.is_open()){
		cerr << "Error on openning file" << endl;
		return EXIT_FAILURE;
	}

	int count=0;
	string line;

	while(getline(file2, line)){
		size_t found = line.find(target);
		if(found != std::string::npos){
			count++;
		}
	}

	cout << "Target: " << target << " found " << count << " times." << endl;

	file2.close();

	return 0;
}

int deleteFile(){
	const string filename = "output1_findElementInDirectory.txt";

	if(std::filesystem::exists(filename)){
		bool removed = std::filesystem::remove(filename);

		if(!removed){
			cerr << "Error on deleting file" << endl;
			return EXIT_FAILURE;
		}
	}else{
		cerr << "Couldn't find file" << endl;
		return EXIT_FAILURE;
	}

	return 0;
}

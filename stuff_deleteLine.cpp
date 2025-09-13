#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>

using namespace std;

int main(int argc, char *argv[]){
	if(argc != 4){
		cout << "Error on argc" << endl;
		cout << "Run: $ ./stuff_deleteLine.x <fileName1> <fileName2> <stringTarget>" << endl;
		cout << "Note: <stringTarget> is the string thats is on the line you want to delete" << endl;
		return 1;
	}

	string f1 = argv[1];
	cout << "File1: " << f1 << endl;
	string f2 = argv[2];
	cout << "File2: " << f2 << endl;

	ifstream file1(f1);
	if(!file1.is_open()){
		cerr << "Error on oppening file1" << endl;
		return 1;
	}

	ofstream file2(f2);

	string line;
	string target = argv[3];
	cout << "Target: "<< target << endl;
	while(getline(file1, line)){
		size_t found = line.find(target);
		if(found == std::string::npos){
			file2 << line << endl;
		}
	}

	file2.close();

	//Counting lines
	ifstream file3(f2);
	if(!file3.is_open()){
		cerr << "Error on openning fil2" << endl;
		return 1;
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

	cout << endl;
	return 0;
}

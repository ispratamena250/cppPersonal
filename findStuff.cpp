#include <iostream>
#include <string>
#include <array>
#include <cstdio>
#include <memory>
#include <algorithm>
#include <sstream>

using namespace std;

int main(int argc, char *argv[]) {
	if (argc != 2) {
		cout << "Error. Run: ./findStuff <argument>" << endl;
		return 1;
	}

	string s = argv[1];

	string command = "ls -1";

	array<char, 128> buffer;
	string resultado;

	unique_ptr<FILE, decltype(&pclose)> pipe(popen(command.c_str(), "r"), pclose);
	if (!pipe) {
		cerr << "Error. Can't run command." << endl;
		return 1;
	}

	while (fgets(buffer.data(), buffer.size(), pipe.get()) != nullptr) {
		resultado += buffer.data();
	}

	istringstream iss(resultado);
	string line;
	int linesNum = 0;
	bool found = false;

	while (getline(iss, line)) {
		linesNum++;
		if (line.find(s) != string::npos) {
			cout << "Found: line " << linesNum << " -> " << line << endl;
			found = true;
		}
	}

	if (!found)
		cout << "Not found" << endl;

	return 0;
}


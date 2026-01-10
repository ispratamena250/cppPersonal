/*
 * Script to calculate how many days are there between two dates
 * Compile: $ g++ -std=c++20 -Wall dias.cpp -o dias.x
 * Run: $ ./dias.x <"YYYY-MM-DD"> <"YYYY-MM-DD">
 * */
#include <iostream>
#include <chrono>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
	string data1_str, data2_str;

	if(argc != 3){
		cout << "Error. Run: $ ./dias.x <\"YYYY-MM-DD\"> <\"YYYY-MM-DD\">" << endl;
		exit(1);
	}

	data1_str = argv[1];

	data2_str = argv[2];

	std::chrono::year_month_day d1, d2;
	
	d1 = std::chrono::year_month_day{
		std::chrono::year(stoi(data1_str.substr(0, 4))),
		std::chrono::month(stoi(data1_str.substr(5, 2))),
		std::chrono::day(stoi(data1_str.substr(8, 2)))
	};
	
	d2 = std::chrono::year_month_day{
		std::chrono::year(stoi(data2_str.substr(0, 4))),
		std::chrono::month(stoi(data2_str.substr(5, 2))),
		std::chrono::day(stoi(data2_str.substr(8, 2)))
	};
	
	std::chrono::sys_days sd1 = std::chrono::sys_days{d1};
	std::chrono::sys_days sd2 = std::chrono::sys_days{d2};
	
	auto diff = sd2 - sd1;
	cout << "Dias: " << diff.count() << "\n";
	
	return 0;
}

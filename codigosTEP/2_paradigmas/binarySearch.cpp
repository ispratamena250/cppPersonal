#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int bsearch(int x, vector<int> &xs);

int main(){
	vector<int> xs;
	set<int> s;
	srand(time(NULL));
	int aux=0, count=0, find=7;

	do{
		aux = rand() % 700;
		s.insert(aux);
		count++;
	}while(s.size() != 300);

	cout << count << "@" <<endl;

	for(auto e : s)
		xs.push_back(e);

	for(auto e : xs)
		cout << e << " ";

	sort(xs.begin(), xs.end());

	if(bsearch(find, xs) == -1)
		cout << endl << endl << -1; 
	else
		cout << endl << endl << "[" << bsearch(find, xs) << "]"<< ": " << xs.at(bsearch(find, xs));

	system("open binarySearch.out");

	return 0;
}

int bsearch(int x, vector<int> &xs){
	int a=0, b=xs.size()-1;

	while(a <= b){
		auto m = a + (b-a)/2;
		if(xs.at(m) == x)
			return m;
		else if(xs.at(m) > x)
			b = m - 1;
		else 
			a = m + 1;
	}

	return -1;
}

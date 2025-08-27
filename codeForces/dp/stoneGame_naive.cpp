/*
 * The idea was to find the position of the biggest and lowest value. 
 * Find how many elements exist between the biggest and lowest. Find this from left to right and from right to left in the vector.
 * Then, with those values, use std::min() to find the minimun value between the 'right to left' quantitie, 'left to right' quantitie and 'from left to right element (biggest or lowest)' quantitie 
 * and 'from right to left element (biggest or lowest)' quantitie. The minimun value is supposed to be the answer
 * */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int t;

	cin >> t;

	for(int i=0; i<t; i++){
		int n=0, e=0, b=0, l=0, indexDir=0, indexEsq=0, z_swp=0, dirEsq=0, esqDir=0;
		cin >> n;

		vector<int> xs(n), aux(n);
		for(int j=0; j<n; j++){ 
			cin >> e; 
			xs.at(j) = e;
			aux.at(j) = e;
		}

		sort(aux.begin(), aux.end()); //std:: function to find the biggest and lowest value?

		b = aux.at(n-1);
		l = aux.at(0);

		for(int k=0; k<n; k++){
			if(xs.at(k) == b){
				indexDir = k;
				esqDir = k+1; //runned throw the vector
			}
			if(xs.at(k) == l){
				indexEsq = k;
				dirEsq = k+1; //runned throw the vector
			}
		}
		if(indexDir > indexEsq){
			z_swp = indexDir;
			esDir = z_swp+1;
			indexDir = indexEsq;
			indexEsq = z_swp;
			dirEsq = indexEsq+1;
		}

		min(); //...
	}

	cout << endl;
	return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main(){
	int n, region;

	//cin >> n;
	n = 5;

	string v[n][n];
	int countTop=0, countBotton=n-1, countLeft=0, countRight=n-1;

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			v[i][j] = '@';			
		}
	}

	n % 2 == 0 ? region = n/2 : region = ((n-1)/2)+1;

	cout << "Regions: " << region << endl;

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if((i==countTop or i==countBotton or j==countLeft or j==countRight)){
				v[i][j] = '#';
				/*cout << "->Before: " << endl;
				cout << "countTop: " << countTop << endl;
				cout << "countBotton: " << countBotton << endl;
				cout << "countLeft: " << countLeft << endl;
				cout << "countRight: " << countRight << endl;

				countTop++;
				countBotton--;
				countLeft++;
				countRight--;

				cout << "->After: " << endl;
				cout << "countTop: " << countTop << endl;
				cout << "countBotton: " << countBotton << endl;
				cout << "countLeft: " << countLeft << endl;
				cout << "countRight: " << countRight << endl;

				cout << endl << endl;

				if(countTop==region and countLeft==region){
					cout << "---------------------->Aqui: " << countTop << " " << countLeft << endl;
					break;
				}*/
			}
		}

	}

	for(int i=0; i<n; i++){
		cout << endl;
		for(int j=0; j<n; j++){
			cout << v[i][j] << " ";
		}
	}

	cout << endl;
	return 0;
}

#include <iostream>
#include <vector>

using namespace std;

const int oo = 1'000'000'010;

int mrs(int n, int m, const vector<vector<int>> &A){
	int ans = -oo;

	for(int a=0; a<n; a++)
		for(int b=0; b<m; b++)
			for(int c=a; c<n; c++)
				for(int d=b; d<m; d++){
					int sum = 0;

					for(int i=a; i<c; i++)
						for(int j=b; j<d; j++)
							sum += A[i][j];

					ans = max(ans, sum);
				}
	return ans;
}

int main(){
	int n, m;
	srand(time(NULL));

	cin >> n >> m;

	vector<vector<int>> A(n, vector<int>(m));

	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			A[i][j] = rand()%100;

	for(int i=0; i<n; i++){
		cout << endl;
		for(int j=0; j<m; j++){
			cout << A[i][j] << "\t";
		}
	}

	cout << endl << endl;
	int ans = mrs(n, m, A);

	cout << ans << endl;

	return 0;
}

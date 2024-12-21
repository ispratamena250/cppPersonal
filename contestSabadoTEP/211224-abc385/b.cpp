#include <bits/stdc++.h>

using namespace std;

int main(){
	int h, w, ph, pw, count=0, dCasas=0;
	cin >> h >> w >> ph >> pw;
	char m[h][w];
	string s;

	for(int i=0; i<h; i++){
		for(int j=0; j<w; j++){
			cin >> m[i][j];
		}
	}
	cin >> s;

	for(int i=0; i<h; i++){
		for(int j=0; j<w; j++){
			if(i==ph and j==pw){
				if(s[count] == 'U' and m[i-1][j] != '#'){
					if(m[i-1][j] == '@'){
						dCasas++;
					}	
					count++;
				}else if(s[count] == 'D' and m[i+1][j] != '#'){
					if(m[i+1][j] == '@')
						dCasas++;
					count++;
				}else if(s[count] == 'L' and m[i][j-1] != '#'){
					if(m[i][j-1] == '@'){
						dCasas++;
					}
					count++;
				}else if(s[count] == 'R' and m[i][j+1] != '#'){
					if(m[i][j+1] == '@'){
						dCasas++;
					}
					count++;
				}
			}
		}
	}

	cout << endl;
	return 0;
}

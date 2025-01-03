#include <iostream>
#include <string>

using namespace std;

int main(){
	string n, m;
	cin >> n >> m;
	size_t aux1=0, aux2=0, aux3=0;

	for(size_t i=0; i<n.size(); i++){
		n[i] = toupper(n[i]);
		m[i] = toupper(m[i]);
	}
	for(size_t i=0; i<n.size(); i++){
		for(size_t j=0; j<n.size(); j++){
			if(n[i] < m[j]){
				aux1++;
			}else if(m[j] < n[i]){
				aux2++;
			}else if(n[i] == m[j]){
				aux3++;
			}
		}		
	}	
	if(aux1 > 0){
		cout << "-1" << endl;
	}else if(aux2 > 0){
		cout << "1" << endl;
	}else if(aux3 == n.size()){
		cout << "0" << endl;
	}

	return 0;
}

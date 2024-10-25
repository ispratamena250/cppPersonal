#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> vetor(3);
	int aux, aux2, aux3, menor, maior;
	
	for(int i=0; i<=2; i++){ //Ler o vetor
		cin >> vetor[i];
	}

	for(int i=0; i<=2; i++){ //Descobre o menor valor
		if(i == 0){
			aux = vetor[0];		
			menor = i;
		}else if(aux > vetor[i]){
			aux = vetor[i];
			menor = i;
		}
	}
	
	for(int j=0; j<=2; j++){ //Descobre o maior valor
		if(j == 0){
			aux2 = vetor[0];
			maior = j;
		}else if(aux2 < vetor[j]){
			aux2 = vetor[j];
			maior = j;
		}
	}
	
	for(int k=0; k<=2; k++){ //Printa, como resposta, o valor restante KKKKKKK
		if(k != menor && k != maior){
			aux3 = vetor[k];
		}
	}
	cout << aux3 << endl;

	return 0;
}

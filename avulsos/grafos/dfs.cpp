#include <iostream>
using namespace std;

const int MAX = 100;

int grafo[MAX][MAX];
bool visitado[MAX];
int V; //número de vértices

void DFS(int v) {
	visitado[v] = true;
	cout << v << " ";

	for (int i = 0; i < V; i++) {
		if (grafo[v][i] == 1 && !visitado[i]) {
			DFS(i);
		}
	}
}

int main() {
	V = 6; // número de vértices (de 0 a 5)

	// Inicializa matriz e vetor de visitados
	for (int i = 0; i < V; i++) {
		visitado[i] = false;
		for (int j = 0; j < V; j++) {
			grafo[i][j] = 0;
		}
	}

	// Adicionando arestas (grafo direcionado)
	grafo[0][1] = 1;
	grafo[0][2] = 1;
	grafo[1][3] = 1;
	grafo[2][4] = 1;
	grafo[3][5] = 1;

	/*for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			grafo[i][j] = 1;
		}
	}*/

	int inicio = 0;
	cout << "DFS a partir do vértice " << inicio << ": ";
	DFS(inicio);
	cout << endl;
	
	cout << endl;

	return 0;
}


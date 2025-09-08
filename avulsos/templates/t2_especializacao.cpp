#include<iostream>

using namespace std;

template <typename T>
void imprimir(T x) {
	std::cout << "Valor: " << x << std::endl;
}

//Especialização para bool
template <>
void imprimir<bool>(bool x) {
	std::cout << (x ? "true" : "false") << std::endl;
}

int main() {
	imprimir(42);     // Valor: 42
	imprimir(3.14);   // Valor: 3.14
	imprimir(true);   // true
			  
	return 0;
}

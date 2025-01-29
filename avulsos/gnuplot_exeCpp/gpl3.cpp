#include <iostream>
#include <cstdio>
#include <cmath>

int main() {
    FILE* gnuplotPipe = popen("gnuplot", "w");
    if (!gnuplotPipe) {
        std::cerr << "Erro ao abrir o Gnuplot!" << std::endl;
        return 1;
    }

    // Configurar saída para PNG
    fprintf(gnuplotPipe, "set terminal pngcairo size 800,600\n");
    fprintf(gnuplotPipe, "set output 'grafico.png'\n");
    fprintf(gnuplotPipe, "set title 'Gráfico em PNG'\n");
    fprintf(gnuplotPipe, "set xlabel 'Eixo X'\n");
    fprintf(gnuplotPipe, "set ylabel 'Eixo Y'\n");
    fprintf(gnuplotPipe, "plot sin(x) title 'sin(x)', cos(x) title 'cos(x)'\n");

    // Fecha o pipe
    pclose(gnuplotPipe);

    std::cout << "Gráfico salvo como 'grafico.png'" << std::endl;

    return 0;
}


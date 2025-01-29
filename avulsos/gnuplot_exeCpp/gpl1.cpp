#include <iostream>
#include <cstdio> // Para popen e pclose
#include <cstdlib> // Para exit()

int main() {
    // Abre o pipe com o Gnuplot
    FILE* gnuplotPipe = popen("gnuplot -persistent", "w");
    if (!gnuplotPipe) {
        std::cerr << "Erro ao abrir o Gnuplot!" << std::endl;
        exit(1);
    }

    // Envia comandos ao Gnuplot
    fprintf(gnuplotPipe, "set title 'Gráfico de Teste'\n");
    fprintf(gnuplotPipe, "set xlabel 'Eixo X'\n");
    fprintf(gnuplotPipe, "set ylabel 'Eixo Y'\n");
    fprintf(gnuplotPipe, "plot sin(x)\n");

    // Fecha o pipe
    pclose(gnuplotPipe);

    return 0;
}


#include <iostream>
#include <cstdio>
#include <cmath> // Para funções matemáticas como sin

int main() {
    // Abre o pipe com o Gnuplot
    FILE* gnuplotPipe = popen("gnuplot -persistent", "w");
    if (!gnuplotPipe) {
        std::cerr << "Erro ao abrir o Gnuplot!" << std::endl;
        exit(1);
    }

    // Configurações do gráfico
    fprintf(gnuplotPipe, "set title 'Seno e Cosseno'\n");
    fprintf(gnuplotPipe, "set xlabel 'Eixo X'\n");
    fprintf(gnuplotPipe, "set ylabel 'Função'\n");
    fprintf(gnuplotPipe, "plot '-' using 1:2 with lines title 'sin(x)', \\\n");
    fprintf(gnuplotPipe, "     '-' using 1:2 with lines title 'cos(x)'\n");

    // Envia os dados de sin(x) para o Gnuplot
    for (double x = 0; x < 2 * M_PI; x += 0.1) {
        fprintf(gnuplotPipe, "%f %f\n", x, sin(x));
    }
    fprintf(gnuplotPipe, "e\n"); // Fim do primeiro conjunto de dados

    // Envia os dados de cos(x) para o Gnuplot
    for (double x = 0; x < 2 * M_PI; x += 0.1) {
        fprintf(gnuplotPipe, "%f %f\n", x, cos(x));
    }
    fprintf(gnuplotPipe, "e\n"); // Fim do segundo conjunto de dados

    // Fecha o pipe
    pclose(gnuplotPipe);

    return 0;
}


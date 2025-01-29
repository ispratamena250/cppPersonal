#include <iostream>
#include <cstdio>
#include <string>
#include <stdexcept>

class Gnuplot {
private:
    FILE* pipe;

public:
    Gnuplot() {
        pipe = popen("gnuplot -persistent", "w");
        if (!pipe) {
            throw std::runtime_error("Erro ao abrir o Gnuplot!");
        }
    }

    ~Gnuplot() {
        if (pipe) {
            pclose(pipe);
        }
    }

    void sendCommand(const std::string& command) {
        fprintf(pipe, "%s\n", command.c_str());
        fflush(pipe);
    }
};

int main() {
    try {
        Gnuplot gp;
        gp.sendCommand("set title 'Classe Gnuplot'");
        gp.sendCommand("set xlabel 'Eixo X'");
        gp.sendCommand("set ylabel 'Eixo Y'");
        gp.sendCommand("plot sin(x) title 'sin(x)'");
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}


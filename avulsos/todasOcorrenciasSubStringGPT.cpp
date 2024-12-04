#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string s = "tres pratos de trigo para tres tigres tristes";
    string sub = "tres ";
    size_t pos = 0;
    vector<size_t> positions;

    // Encontra todas as posições de "tres"
    while ((pos = s.find(sub, pos)) != string::npos) {
        positions.push_back(pos);
        pos += sub.size();
    }

    // Itera pela string e verifica se o índice está dentro de alguma ocorrência
    for (size_t i = 0; i < s.size(); i++) {
        bool isInSubstring = false;
        for (size_t p : positions) {
            if (i >= p && i < p + sub.size()) {
                isInSubstring = true;
                break;
            }
        }

        // Se não está dentro de nenhuma ocorrência de "tres", imprime o caractere
        if (!isInSubstring) {
            cout << s[i];
        }
    }

    cout << endl;

    return 0;
}


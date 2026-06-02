#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int numeroSecreto = rand() % 100 + 1;
    int chute;
    int tentativas = 0;

    cout << "=== JOGO DE ADIVINHACAO ===\n";

    do {
        cout << "Digite seu chute: ";
        cin >> chute;

        tentativas++;

        if (chute > numeroSecreto) {
            cout << "Muito alto!\n";
        }
        else if (chute < numeroSecreto) {
            cout << "Muito baixo!\n";
        }
        else {
            cout << "\nParabens! Voce acertou em "
                 << tentativas
                 << " tentativas.\n";
        }

    } while (chute != numeroSecreto);

    return 0;
}
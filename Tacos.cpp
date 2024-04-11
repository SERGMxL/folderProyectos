
#include <iostream>
#include <queue>

using namespace std;

int main() {
    int N, op, numTacos, tacosVendidos = 0;
    queue<int> fila;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> op;

        if (op == 1) {
            cin >> numTacos;
            fila.push(numTacos);
        } else if (op == 2) {
            if (!fila.empty()) {
                tacosVendidos += fila.front();
                fila.pop();
            }
        } else if (op == 3) {
            cout << fila.size() << endl;
        } else if (op == 4) {
            cout << tacosVendidos << endl;
        }
    }

    return 0;
}

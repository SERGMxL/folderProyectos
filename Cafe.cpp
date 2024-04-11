#include <iostream>
#include <queue>
#include <unordered_set>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    queue<string> cola;
    unordered_set<string> enCola;
    vector<string> atendidos;

    for (int i = 0; i < n; i++) {
        string evento, nombre, amigo;
        cin >> evento;

        if (evento == "LLEGA") {
            cin >> nombre;
            if (enCola.count(nombre) == 0) {
                cola.push(nombre);
                enCola.insert(nombre);
            }
        } else if (evento == "METE") {
            cin >> nombre >> amigo;
            if (enCola.count(amigo) > 0) {
                queue<string> nuevaCola;
                bool encontrado = false;
                while (!cola.empty()) {
                    string actual = cola.front();
                    cola.pop();
                    if (actual == amigo && !encontrado) {
                        nuevaCola.push(actual);
                        nuevaCola.push(nombre);
                        enCola.insert(nombre);
                        encontrado = true;
                    } else {
                        nuevaCola.push(actual);
                    }
                }
                if (!encontrado) {
                    cola.push(nombre);
                    enCola.insert(nombre);
                }
                cola = nuevaCola;
            } else {
                cola.push(nombre);
                enCola.insert(nombre);
            }
        } else { // ATIENDE
            string atendido = cola.front();
            cola.pop();
            enCola.erase(atendido);
            atendidos.push_back(atendido);
        }
    }

    for (const string& nombre : atendidos) {
        cout << nombre << "\n";
    }

    return 0;
}

#include <iostream>
#include <deque>
#include <string>
#include <unordered_map>

using namespace std;

void procesar_eventos(int n, const vector<string>& eventos) {
    deque<string> cola;
    unordered_map<string, string> amigos;

    for (int i = 0; i < n; ++i) {
        string evento = eventos[i].substr(0, 6);
        if (evento == "LLEGA ") {
            string nombre = eventos[i].substr(6);
            cola.push_back(nombre);
            amigos[nombre] = nombre;
        } else if (evento == "METE ") {
            string nombres = eventos[i].substr(6);
            string amigo_existente = nombres.substr(0, nombres.find(" "));
            string amigo_a_seguir = nombres.substr(nombres.find(" ") + 1);
            auto it = find(cola.begin(), cola.end(), amigo_existente);
            cola.insert(it + 1, amigo_a_seguir);
            amigos[amigo_a_seguir] = amigo_existente;
        } else if (evento == "ATIEND") {
            cout << cola.front() << endl;
            amigos.erase(cola.front());
            cola.pop_front();
        }
    }
}

int main() {
    int n;
    cin >> n;
    cin.ignore();
    vector<string> eventos(n);
    for (int i = 0; i < n; ++i) {
        getline(cin, eventos[i]);
    }

    procesar_eventos(n, eventos);

    return 0;
}

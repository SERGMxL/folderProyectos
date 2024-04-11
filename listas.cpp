#include <algorithm>
#include <iostream>
#include <list>

using namespace std;

int main()
{

//Declaracion de lista de enetros
    list<int> lista;

//Inicializar diractamente con datos
    lista = {7, 5, 16, 8 };

//Agregar un entero al frente de la lista
    lista.push_front(25);

//Agragar un entero al final de la lista
    lista.push_back(13);

//Insertar un entero antes del 16 mediante busqueda
    auto it = find(lista.begin(), lista.end(), 16);
    if (it != lista.end())
    {
        lista.insert(it, 42);

    }

//Imprimir la lista
    for (int n : lista)
    {

        cout << n << ", ";
    }
    cout <<endl;
    return 0;
}

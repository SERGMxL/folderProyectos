#include <iostream>

using namespace std;

int calcularBichos(int N, int D) {
    int total_bichos = N;
    int bichos_A = N;
    int bichos_B = 0;
    int bichos_C = 0;

    for (int i = 0; i < D; i++) {
        int nuevos_A = bichos_A;
        int nuevos_B = bichos_A * 3 + bichos_B * 2;
        int nuevos_C = bichos_A + bichos_B * 2 + bichos_C * 4;

        total_bichos += nuevos_A + nuevos_B + nuevos_C;
        bichos_A = nuevos_A;
        bichos_B = nuevos_B;
        bichos_C = nuevos_C;
    }

    return total_bichos;
}

int main() {
    int N, D;
    cin >> N >> D;

    int total_bichos = calcularBichos(N, D);
    cout << total_bichos << endl;

    return 0;
}

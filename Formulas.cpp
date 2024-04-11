#include <iostream>

using namespace std;

int main() {
  float a, b, c;
  cout;
  cin >> a;
  cout;
  cin >> b;
  cout;
  cin >> c;

  float valor;
  if (c == 0) {
    valor = -1;
  } else {
    valor = (a * a + b * b) / (2 * a * c);
  }

  if (valor == -1) {
    cout << "indefinido" << endl;
  } else {
    cout << valor << endl;
  }

  return 0;
}
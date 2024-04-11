#include <iostream>
#include <stack>

using namespace std;

int main() {
    int n;
    cin >> n;

    stack<int> s;

    for (int i = 0; i < n; i++) {
        int instruction;
        cin >> instruction;

        if (instruction == 1) {
            int value;
            cin >> value;
            s.push(value);
        } else if (instruction == 2) {
            if (!s.empty()) {
                s.pop();
            }
        } else if (instruction == 3) {
            if (!s.empty()) {
                cout << s.top() << endl;
            } else {
                cout << "Empty!" << endl;
            }
        }
    }

    return 0;
}

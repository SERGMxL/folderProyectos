#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> sequence(n);

    for (int i = 0; i < n; ++i) {
        sequence[i] = i;
    }

    for (int i = 0; i < m; ++i) {
        int u, x;
        char op;
        cin >> u >> op >> x;

        if (op == 'A') {
            sequence.erase(sequence.begin() + u);
            sequence.insert(sequence.begin() + x + 1, u);
        } else if (op == 'D') {
            sequence.erase(sequence.begin() + u);
            sequence.insert(sequence.begin() + x, u);
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << sequence[i] << " ";
    }
    cout << endl;

    return 0;
}

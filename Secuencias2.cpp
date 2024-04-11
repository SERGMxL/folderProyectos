#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> sequence(n);

    for (int i = 0; i < n; ++i) {
        sequence[i] = i;
    }
    for (int i = 0; i < m; ++i) {
        int pos;
        char op;
        cin >> pos >> op;

        pos = max(0, min(pos, n - 1));
        if (op == 'A') {
            if (pos > 0) {
                int temp = sequence[pos];
                sequence.erase(sequence.begin() + pos);
                sequence.insert(sequence.begin() + pos - 1, temp);
            }
        } else if (op == 'D') {
            if (pos < n - 1) {
                int temp = sequence[pos];
                sequence.erase(sequence.begin() + pos);
                sequence.insert(sequence.begin() + pos + 1, temp);
            }
        }
    }

    for (int num : sequence) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

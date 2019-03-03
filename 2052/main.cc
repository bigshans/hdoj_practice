#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n, m;
    while(cin >> n >> m) {
        cout << "+";
        for (int i = 0; i < n; ++i) {
            cout << "-";
        }
        cout << "+" << endl;
        for (int j = 0; j < m; ++j) {
            for (int i = 0; i < n + 2; ++i) {
                if (i == 0 || i == n + 1) {
                    cout << "|";
                    if (i == n + 1) {
                        cout << endl;
                    }
                } else {
                    cout << " ";
                }
            }
        }
        cout << "+";
        for (int i = 0; i < n; ++i) {
            cout << "-";
        }
        cout << "+" << endl;
        cout << endl;
    }
    return 0;
}

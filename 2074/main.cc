#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n;
    char a, b;
    while (cin >> n >> a >> b) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (i == 0 || i == n - 1) {
                    if (j == 0 || j == n - 1) {
                        cout << " ";
                    } else {
                        cout << b;
                    }
                }
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}

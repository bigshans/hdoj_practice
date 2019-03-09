#include <iostream>

using namespace std;

int multipy[10][10];

void init()
{
    for (int i = 1; i <= 9; ++i) {
        for (int j = 1; j <= 9; ++j) {
            multipy[i][j] = i * j;
        }
    }
}

int main(int argc, char *argv[])
{
    int n, c;
    init();
    cin >> c;
    while (c--) {
        cin >> n;
        for (int i = 1; i <= n ;++i) {
            for (int j = 1; j <= n; ++j) {
                if (j != 1) {
                    cout << " ";
                }
                cout << multipy[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}

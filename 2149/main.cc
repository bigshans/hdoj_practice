#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n, m;
    while (cin >> m >> n) {
        if (m <= n) {
            for (int i = m; i <= n; ++i) {
                if (i == n) {
                    cout << i << endl;
                } else {
                    cout << i << " ";
                }
            }
            continue;
        }
        if (m % (n + 1) == 0) {
            cout << "none" << endl;
        } else {
            cout << m % (n + 1) << endl;
        }
    }
    return 0;
}

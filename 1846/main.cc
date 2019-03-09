#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int c, n, m;
    cin >> c;
    while (c--) {
        cin >> m >> n;
        if (m % (n + 1) == 0) {
            cout << "second" << endl;
        } else {
            cout << "first" << endl;
        }
    }
    return 0;
}

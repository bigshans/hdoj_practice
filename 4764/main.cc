#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n, m;
    while (cin >> m >> n, n && m) {
        if ((m - 1) % (n + 1) == 0) {
            cout << "Jiang" << endl;
        } else {
            cout << "Tang" << endl;
        }
    }
    return 0;
}

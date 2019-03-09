#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n;
    while (cin >> n, n) {
        if (n == 1) {
            cout << 0 << endl;
            continue;
        }
        int cnt = 0;
        while (n != 1) {
            if (n % 2) {
                n = (n * 3 + 1) / 2;
            } else {
                n /= 2;
            }
            cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}

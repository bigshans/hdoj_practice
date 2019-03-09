#include <iostream>

using namespace std;

int a[105];

int main(int argc, char *argv[])
{
    int n;
    while (cin >> n, n) {
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            sum += a[i] * a[i];
        }
        cout << sum << endl;
    }
    return 0;
}

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n;
    while (cin >> n, n) {
        int ans = 1;
        while (!(n & 1)) {
            ans <<= 1;
            n >>= 1;
        }
        cout << ans << endl;
    }
    return 0;
}

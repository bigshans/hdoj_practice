#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n;
    while (cin >> n && n) {
        int before = 0;
        int now = 0, ans = 0;
        for (int i = 1; i <= n; ++i) {
            cin >> now;
            if (before <= now) {
                ans += (now - before) * 6 + 5;
            } else {
                ans += (before - now) * 4 + 5;
            }
            before = now;
        }
        cout << ans << endl;
    }
    return 0;
}

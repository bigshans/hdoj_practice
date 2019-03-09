#include <iostream>

using namespace std;

int trans_sum(int n, int r)
{
    int ans = 0;
    while (n) {
        ans += n % r;
        n /= r;
    }
    return ans;
}

int main(int argc, char *argv[])
{
    int n;
    while (cin >> n && n) {
        int n_10 = trans_sum(n, 10);
        int n_12 = trans_sum(n, 12);
        int n_16 = trans_sum(n, 16);
        if (n_10 == n_12 && n_12 == n_16) {
            cout << n << " is a Sky Number." << endl;
        } else {
            cout << n << " is not a Sky Number." << endl;
        }
    }
    return 0;
}

#include <iostream>

using namespace std;

typedef long long ll;

ll M[30] = {0, 0, 1};

ll C(int n, int m)
{
    ll ans = 1;
    for (int i = 1; i <= m; ++i) {
        ans *= (n - i) + 1;
        ans /= i;
    }
    return ans;
}

int main(int argc, char *argv[])
{
    for (int i = 3; i < 30; ++i) {
        M[i] = (i - 1) * (M[i - 1] + M[i - 2]);
    }
    int n;
    while (cin >> n && n) {
        ll sum = 1;
        for (int i = 1; i <= n/2; ++i) {
            sum += C(n, i) * M[i];
        }
        cout << sum << endl;
    }
    return 0;
}


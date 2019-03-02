#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const int N=2e3+20;
int a[N], b[N];

int generating_func(int n)
{
    for (int i = 0; i <= n; ++i) {
        a[i] = 1;
        b[i] = 0;
    }
    for (int i = 2; i <= n; ++i) {
        for (int j = 0; j <= n; ++j) {
            for (int k = 0; k <= n; k += i) {
                b[j + k] += a[j];
            }
        }
        for (int k = 0; k <= n; ++k) {
            a[k] = b[k];
            b[k] = 0;
        }
    }
    return a[n];
}

int main(int argc, char *argv[])
{
    int n;
    while (cin >> n) {
        cout << generating_func(n) << endl;
    }
    return 0;
}

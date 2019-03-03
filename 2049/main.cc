#include <iostream>

using namespace std;

typedef long long ll;

ll M[25] = { 0 }, N[35] = {1, 1, 2, 6};

int main(int argc, char *argv[])
{
    M[1] = 0, M[2] = 1, M[3] = 2;
    for (int i = 4; i <= 20; ++i) {
        M[i] = (i - 1) * (M[i - 1] + M[i - 2]);
        N[i] = N[i - 1] * i;
    }
    int n;
    cin >> n;
    while (n--) {
        int a, b;
        cin >> a >> b;
        ll ans = M[b] * (N[a] / N[b] / N[a - b]);
        cout << ans << endl;
    }
    return 0;
}

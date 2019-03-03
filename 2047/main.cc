#include <iostream>

using namespace std;

typedef long long ll;

ll dp[41] = { 0 };

int main(int argc, char *argv[])
{
    dp[1] = 3;
    dp[2] = 8;
    for (int i = 3; i <= 40; ++i) {
        dp[i] = 2 * (dp[i - 1] + dp[i - 2]);
    }
    int n;
    while (cin >> n) {
        cout << dp[n] << endl;
    }
    return 0;
}


#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main(int argc, char *argv[])
{
    int n, m;
    while (cin >> n >> m) {
        cout << n / gcd(n, m) * m << endl;
    }
    return 0;
}

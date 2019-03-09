#include <iostream>

using namespace std;

int aera[30] = {1, 3, 5};

void init()
{
    for (int i = 3; i < 30; ++i) {
        aera[i] = aera[i - 1] + aera[i - 2] * 2;
    }
}

int main(int argc, char *argv[])
{
    int n, c;
    init();
    cin >> c;
    while (c--) {
        cin >> n;
        cout << aera[n - 1] << endl;
    }
    return 0;
}

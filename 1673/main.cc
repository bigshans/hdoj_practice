#include <iostream>
#include <algorithm>

using namespace std;

const int INF = 0xffffff;

int main(int argc, char *argv[])
{
    int c, n;
    cin >> c;
    while (c--) {
        int min_num = INF, max_num = 0, input;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> input;
            min_num = min(min_num, input);
            max_num = max(max_num, input);
        }
        cout << (max_num - min_num) * 2 << endl;
    }
    return 0;
}

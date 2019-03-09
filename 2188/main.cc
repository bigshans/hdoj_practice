/* 巴什博弈
 * 若为 n = m + 1 ，则先手最多拿走 m 个，必然有余数被后手拿走。
 * 若为 n = (m + 1) * r + x, 则先手先拿走 x 个，后手拿走 k 个，先手就拿走 m + 1 - k 个，一轮取走 m + 1 个，最后先手拿走 x 个。
 */
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n, m, c;
    cin >> c;
    while (c--) {
        cin >> n >> m;
        if (n % (m + 1) != 0) {
            cout << "Grass" << endl;
        } else {
            cout << "Rabbit" << endl;
        }
    }
    return 0;
}

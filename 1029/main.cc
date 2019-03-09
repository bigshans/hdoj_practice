#include <stdio.h>

using namespace std;

int main(int argc, char *argv[])
{
    int n;
    while (scanf("%d", &n) != EOF) {
        int cnt = 0, max, cur;
        for (int i = 0; i < n; ++i) {
            scanf("%d", &cur);
            if (!cnt) {
                max = cur;
                cnt++;
            } else if (cur != max) {
                cnt--;
            } else {
                cnt++;
            }
        }
        printf("%d\n", max);
    }
    return 0;
}

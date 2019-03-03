#include <stdio.h>

int main(int argc, char *argv[])
{
    int a, b;
    while (scanf("%d%d", &a, &b) != EOF) {
        if (!a || !b) {
            break;
        }
        bool flag = true;
        for (int i = 0; i < 100; ++i) {
            if ((a * 100 + i) % b == 0) {
                printf(flag?"%02d":" %02d", i);
                flag = false;
            }
        }
        printf("\n");
    }
    return 0;
}


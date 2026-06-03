#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[1000001];

    scanf("%s", str);

    int flag1 = 0;
    int flag2= 0;

    for (int i = 0; str[i]; i++) {
        char ch = str[i];
        flag1 = flag1 | (1 << (ch - 'a'));
        flag2 = flag2 | (1 << (ch - 'A'));
    }

    printf((flag1 && flag2 == (1 << 26) - 1) ? "yes" : "no");

    return 0;
}

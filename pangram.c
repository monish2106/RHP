#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[1000001];

    scanf("%s", str);

    int flag = 0;

    for (int i = 0; str[i]; i++) {
        char ch = str[i];
        flag = flag | (1 << (ch - 'a'));
    }

    printf((flag == (1 << 26) - 1) ? "yes" : "no");

    return 0;
}

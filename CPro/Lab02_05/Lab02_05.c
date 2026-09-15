#include <stdio.h>

main()
{
    char str[100];
    int i, count;

    scanf("%s", str);

    i = 0;

    while (str[i] != '\0') {
        count = 1;

        while (str[i] == str[i + 1]) {
            count++;
            i++;
        }

        printf("%c", str[i]);

        if (count > 1) {
            printf("%d", count);
        }

        i++;
    }

    printf("\n");

    return 0;
}
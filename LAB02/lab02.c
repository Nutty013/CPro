/*lab02.c*/
#include <stdio.h>

main() {
    int n, i, j;
    int a[100];
    int count = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) {
        int duplicate = 0;
        for (j = 0; j < count; j++) {
            if (a[i] == a[j]) {
                duplicate = 1;
                break;
            }
        }

        if (duplicate == 0) {
            a[count] = a[i];
            count++;
        }
    }

        for (i = 0; i < count; i++) {
        printf("%d", a[i]);



        /*if (i < count - 1) {
            printf(" ");
        }*/
    }

	printf("\n");
    return 0;
}
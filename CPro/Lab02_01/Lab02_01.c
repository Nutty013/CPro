#include <stdio.h>

main()
{
    int a[100];
    int n, i, j, k;
    int duplicate;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {

            if (a[i] == a[j]) {
                for (k = j; k < n - 1; k++) {
                    a[k] = a[k + 1];
                }

                n--;
                j--;
            }
        }
    }

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {

            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for (i = 0; i < n; i++) {
        printf("%d", a[i]);

        if (i < n - 1) {
            printf(" ");
        }
    }

    printf("\n");

    return 0;
}
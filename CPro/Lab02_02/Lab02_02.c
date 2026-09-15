#include <stdio.h>

main()
{
    int a[5], b[5];
    int i, j, k;
    int found = 0;
    int duplicate;

    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 5; i++) {
        scanf("%d", &b[i]);
    }

     for (i = 0; i < 5; i++) {
        duplicate = 0;

        for (j = 0; j < 5; j++) {
            if (a[i] == b[j]) {
                duplicate = 1;
                break;
            }
        }

        if (duplicate == 1) {
            for (k = 0; k < i; k++) {
                if (a[i] == a[k]) {
                    duplicate = 0;
                    break;
                }
            }
        }

        if (duplicate == 1) {
            a[found] = a[i];
            found++;
        }
    }

    for (i = 0; i < found - 1; i++) {
        for (j = i + 1; j < found; j++) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    if (found == 0) {
        printf("-1");
    } else {
        for (i = 0; i < found; i++) {
            printf("%d", a[i]);

            if (i < found - 1) {
                printf(" ");
            }
        }
    }
	printf("\n");
    return 0;
}
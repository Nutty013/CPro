#include <stdio.h>

main()
{
    int n, i;
    int sum = 0;
    int total;

    scanf("%d", &n);

    for (i = 0; i < n - 1; i++) {
        int x;
        scanf("%d", &x);
        sum = sum + x;
    }

    total = n * (n + 1) / 2;

    printf("%d\n", total - sum);

    return 0;
}
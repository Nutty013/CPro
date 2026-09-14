#include <stdio.h>

main()
{
    int a[100];
    int n, i, j, k;
    float sum ;

	scanf("%d", &n);
	scanf("%d", &k);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

	for (i = 0; i <= n - k; i++) {
        sum = 0;
		for(j=i; j<i+k; j++){
			sum = sum + a[j];
		}

	sum = sum/k;

	printf("%.2f ",sum);

	}

	printf("\n");

}
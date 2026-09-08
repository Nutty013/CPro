#include <stdio.h>

main()
{
    int a[100];
    int n, i, k;
    float sum ;

	scanf("%d", &n);
	scanf("%d", &k);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

	for(i=0; i<k; i++){
		sum = sum + a[i];
	}

	sum = sum/k;

	printf("%.2f \n",sum);

}
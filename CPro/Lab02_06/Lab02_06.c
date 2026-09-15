#include <stdio.h>

main()
{
    int a[100][100];
    int n, i, j;
    int identity = 1;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

	for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
			if (i == j) {
		       	if (a[i][j] != 1) {
		           	identity = 0;
                }
            } else
            	if (a[i][j] != 0) {
			       	identity = 0;
                }
		}
	}

	if (identity == 1) {
	        printf("Yes");
	    } else {
	        printf("No");
	    }

	    printf("\n");

    return 0;

}
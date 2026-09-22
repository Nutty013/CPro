#include <stdio.h>

main()
{
    int a[100][100];
    int n, i, j, k;
    int rowMin, colMax;
    int identity = 1;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

	 for (i = 0; i < n; i++) {
	         for (j = 0; j < n; j++) {

	             rowMin = 1;
	             colMax = 1;

	             for (k = 0; k < n; k++) {
	                 if (a[i][k] < a[i][j]) {
	                     rowMin = 0;
	                 }
	             }

	             for (k = 0; k < n; k++) {
	                 if (a[k][j] > a[i][j]) {
	                     colMax = 0;
	                 }
	             }

	             if (rowMin == 1 && colMax == 1) {
	                 printf("%d\n", a[i][j]);
	                 return 0;
	             }
	         }
	     }

    printf("None\n");

}
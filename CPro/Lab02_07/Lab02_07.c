#include <stdio.h>

main()
{

	char str[20];
	int i, j;

	scanf("%s",str);

	for ( i=0;i<str[i];i++ ){
		printf("%d ", str[i]);
	}

	printf("\n");

	/*????????????????????????????????*/
	for (i = 0; i < str[i-1]; i++) {
	        for (j = i + 1; j < str[i]; j++) {
	            if (str[i] > str[j]) {
	                int temp = str[i];
	                str[i] = str[j];
	                str[j] = temp;
	            }
	        printf("%d ", str[i]);
	        }
	    }

}
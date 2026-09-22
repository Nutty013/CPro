#include <stdio.h>
#include <string.h>

main()
{

	char str[20];
	int i, j;
	char temp;

	scanf("%s",str);

	for (i = 0; i < strlen(str) - 1; i++) {
	        for (j = i + 1; j < strlen(str); j++) {
	            if (str[i] > str[j]) {
	                temp = str[i];
	                str[i] = str[j];
	                str[j] = temp;
	            }
	        }
	    }

	    printf("%s\n", str);
}
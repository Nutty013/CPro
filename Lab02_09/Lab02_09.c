#include <stdio.h>

main()
{

	char str1[20], str2[20];
	int i;
	int count1[26] = {0};
    int count2[26] = {0};
	int anagram = 1;

	scanf("%s",str1);
	scanf("%s",str2);

	if (strlen(str1) != strlen(str2)) {
	        anagram = 0;
	    }
	    else {
	        for (i = 0; str1[i] != '\0'; i++) {
	            str1[i] = tolower(str1[i]);
	            count1[str1[i] - 'a']++;
	        }

	        for (i = 0; str2[i] != '\0'; i++) {
	            str2[i] = tolower(str2[i]);
	            count2[str2[i] - 'a']++;
	        }

	        for (i = 0; i < 26; i++) {
	            if (count1[i] != count2[i]) {
	                anagram = 0;
	                break;
	            }
	        }
	    }

	    if (anagram == 1) {
	        printf("Anagram\n");
	    }
	    else {
	        printf("Not Anagram\n");
    }
}
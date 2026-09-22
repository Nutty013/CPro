#include <stdio.h>

main(){

	float w1, w2, W, H, h;
	int Day, D;

	printf("Input Advancement distance on odd days : ");
	scanf("%f",&w1);

	printf("Input Retrograde period on even-numbered days : ");
	scanf("%f",&w2);

	printf("Input Well Depth : ");
	scanf("%f",&H);
	printf("\n");

	printf("What is the total walking distance?\n");
	printf("Input Day : ");
	scanf("%d",&D);

	h = ((w1-w2)*(D/2))+(w1*(D%2));
	Day = (H/h)*D;

	if(D%2 == 1)
		Day = Day + 1;
	else
		Day = Day + 2;

	printf("\n");

	printf("In %d days, you can travel : %.2f m.\n",D,h);
	printf("It took a total of %d days to get out.\n",Day);
	printf("\n");


}
#include <stdio.h>

main(){

	float o, s[2];
	float p;

	printf("Input Time is ");
	scanf("%f",&s[1]);
	scanf("%f",&s[2]);

	if(s[1] > 12){
		s[1] = s[1]-12;
	}

	if(s[2] > 12){
		p = s[2]/12;
		s[1]= s[1]+(p*0.2);
	}

	o = ((s[1]*5)-s[2])*6;

	printf("%.2f",o);


}
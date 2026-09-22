#include <stdio.h>

main(){

	float Gp, Lp, Hp, Gb, Lb;
	int n;
	float P, p1, Use, Re;
	float pi = 3.14;

	printf("Width of the rolled dough : ");
	scanf("%f",&Gp);
	printf("Length of the rolled dough : ");
	scanf("%f",&Lp);
	printf("Width of the rolled dough : ");
	scanf("%f",&Hp);
	printf("Width of the Box : ");
	scanf("%f",&Gb);
	printf("Length of the Box : ");
	scanf("%f",&Lb);
	printf("\n");

	P = Gp*Lp*Hp;

	p1 = (Gb*Lb*Hp)+(pi*(Gb/2)*(Gb/2)*Hp);

	n = P/p1;

	Use = p1*n;

	Re = P-Use;

	printf("The ratio of remaining flour to used flour is %.2f : %.2f \n",Re,Use);

}
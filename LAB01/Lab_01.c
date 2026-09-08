/*File Name: Lab_01.c*/
#include "stdio.h"
#include "conio.h"
#define PI 3.142
main()
{
	int radius, area;
	area = 0;
	printf("Enter radius of circle :");
	scanf("%f",&radius);
	area = PI*radius*radius;
	printf("The area of circle is : %f\n",area);
	getch();
}/*End of Program*/
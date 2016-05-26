#include <stdio.h>
#include <stdlib.h>
                                        
int main()
{
	float base, height, area;
	printf("Enter base:  ");
	scanf("%f", &base);
	printf("\nEnter height:  ");
	scanf("%f",&height);
	area = (base*height)/2;
	
	printf("\nAREA: %f\n\n", area);
	
	system ("PAUSE");
}

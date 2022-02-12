#include<stdio.h>

int main(){
	int o;
	float a,b,c;
	printf("Enter a and b values \n");
	scanf("%f%f \n" ,&a ,&b);
	printf("Enter operator \n");
	printf("1 for addiction \n");
	printf("2 for substraction \n");
	printf("3 for multiplication \n");
	printf("4 for division \n");
	scanf("%d" ,&o);
	
	switch(o)
	{
		case 1:
			c = a+b;
			printf("c = %f" ,c);
			break;
		case 2:
			c = a-b ;
			printf("c = %f" ,c);
			break;
		case 3:
			c = a*b;
			printf("c = %f" ,c);
			break;
		case 4:
			c = a/b;
			printf("c = %f" ,c);
			break;
		default:
		    printf("invalid input");
			break;
										
	}
	return 0;
}
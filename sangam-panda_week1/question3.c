#include<stdio.h>

int main()
{
	int a;
	printf("Enter any number");
	scanf("%d" ,&a);
	
	switch(a%2==0){
		case 1:
			printf("It is an even number");
			break;
		
		case 0:
			printf("It is an odd number");
			break;
	}
	return 0;
}
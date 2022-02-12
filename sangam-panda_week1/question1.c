#include<stdio.h>

int main()
{
	char name[20];
	printf("Enter your name: ");
	gets(name);
	
	char branch[20];
	printf("Enter your branch: ");
	gets(branch);
	
	char hobbies[20];
	printf("Enter your hobbies: ");
	gets(hobbies);
	
	int num;
	printf("Enter your regd no.: ");
	scanf("%d" , &num);
	
	printf ("NAME: ",name);
	puts (name);
	
	printf ("BRANCH: ",branch);
	puts (branch);
	
	printf ("HOBBIES: ",hobbies);
	puts (hobbies);
	
	printf ("REGD NO: %d\n" ,num);
	
	return 0;
}
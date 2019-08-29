/*
Andrew Martinez
CSC/ITC 251
lab #1
*/
//this is a single line comment
#include <stdlib.h>
#include <stdio.h>
int main (void)
{

	int x=0;
	int y=0;
	int number=8;

	printf("Enter a number between 1 and 10 inclusive\n");
	scanf("%d",&x);
	y=x+number;


	printf("x=%d y= %d number = %d\n",x,y,number);
	
	if (x==number)
	{
		printf("You are correct! You win\n");
		puts("You are correct! You win.");
	}
	else
	{
		puts("Incorrect");
	}

	return EXIT_SUCCESS; 
	

}

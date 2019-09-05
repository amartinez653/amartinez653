/* Andrew Martinez
  Lab2.c
 CSC/ITC251*/
#include <stdlib.h>
#include <stdio.h>
int main (void)
{
	int y=0,z,counta=0, countb=0, countc=0,countd=0,countf=0,i;
	char grade='e', lower;
	double x=2.0;
	x=z/(double)h;
	printf("%f = %d / %d \n", x,z,h);
	/*
	while(grade != 'z')
	{
	puts("Enter a letter grade(press z to quit)");
	scanf(" %c",&grade);
	
	
	if(grade == 'A')
	{
		counta=counta+1;
	}
	else if(grade == 'B')
	{
		countb++;
	}
	else if(grade =='C')
	{
		countc++;
	}
	else if(grade == 'D')
	{
		countd++;
	}
	else if(grade =='F')
	{
		countf++;
	}
	else 
	{
		puts("Wrong grade entered.");
	}
	}
	printf("There are %d A's, %d B's,%d C's, %d D's and %d F's\n",counta,countb,countc,countd,countf);
*/
/*	for (i=0; i<5;i++)
	{
		printf("this is for loop round %d\n",i);
	}

	printf("y=%d\n",y);
	printf("y=%d\n",y++);
	printf("y=%d\n",++y);
	printf("y=%d\n",y++);
	printf("y=%d\n",y);
*/
	while (grade != 'z')
	{
		switch(grade)
		{
		case 'a':
		case 'A':
			counta++;
			break;
		case 'b':
		case 'B':
			countb++;
			break;
		case 'c':
		case 'C':
			countc++;
			break;
		case 'd':
		case 'D':
			countd++;
			break;
		case 'f':
		case 'F':
			countf++;
			break;
		default:
			puts(default);
			break;
		}
		printf("%d grade",grade);
	}
	int t = (4*(counta)+3*(countb)+2*(countc)+1*(countd))
	return EXIT_SUCCESS;

}

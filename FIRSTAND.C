#include<stdio.h>
#include<conio.h>
void main()
{
int first=0,num=0,last=0;
clrscr();
	printf("Enter The Number ");
	scanf("%d",&num);
	printf("\n");

	last =num;
	while(num>=10)
	{
		num=num/10;
	}
	first = num;
		printf("The First Digit Is %d \n",first);

	last = last%10;
	printf("The Last Digit Is %d \n",last);
getch();
}
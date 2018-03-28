#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Sum,Round,Add;

void Grab_Logo()
{
	system("clear");
	printf("==========================\n");
	printf("|         Grab 30!       |\n");
	printf("==========================\n");
}

void Grab_Begin()
{
	system("clear");
	printf("==========================\n");
	printf("|     The Game Begins!   |\n");
	printf("==========================\n");
}

int Grab_Display()
{
	printf("+------------------------+\n");
	printf("|       NO.%2d Round      |\n",Round);
	printf("|         SUM:%2d         |\n",Sum);
	printf("+------------------------+\n");
}

int main(int argc,int **argv)
{
	Grab_Begin();
	while(Sum<30)
	{
		Round++;
		Grab_Display();
		if(Round%2)
		{
			printf("==========================\n");
			printf("=      Game Player1      =\n");
			printf("==========================\n");
			do
			{
				printf("input add:");
				scanf("%d",&Add);
			}while(Add<1 || Add>2);
			Sum+=Add;
		}
		else
		{
			printf("==========================\n");
			printf("=      Game Player2      =\n");
			printf("==========================\n");
			do
			{
				printf("input add:");
				scanf("%d",&Add);
			}while(Add<1 || Add>2);
			Sum+=Add;
		}
		Grab_Logo();
	}
	Grab_Display();
	if(Round%2)
	{
		system("clear");
		printf("Player1 Win!\n");
	}
	else
	{
		system("clear");
		printf("Player2 Win!\n");
	}
	return 0;
}

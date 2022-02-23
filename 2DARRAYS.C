#include<stdio.h>
#include<conio.h>
void main()
{
	int m1[3][3],m2[3][3],m3[3][3],i,j;
	clrscr();
	//logic: input value into 2d array
	for(i=0;i<3;i++)  //row
	{
		for(j=0;j<3;j++) //colum
		{
			printf("\n Enter Value m1[%d][%d]:",i,j);
			scanf("%d",&m1[i][j]);
		}
	}
		for(i=0;i<3;i++) //row
		{
			for(j=0;j<3;j++) //colum
			{
				printf("\n Enter Value m2[%d][%d]:",i,j);
				scanf("%d",&m2[i][j]);
			}
		}
		printf("1st matrix:-");
		printf("\n");
		//logic print 2d array
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++) //colum
			{
				textcolor(GREEN);
				cprintf(" %d ",m1[i][j]);
			}

			printf("\n");
		}
		printf("2th matrix:-");
		printf("\n");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++) //colum
			{
				textcolor(YELLOW);
				cprintf(" %d ",m2[i][j]);
			}
			printf("\n");
		}

		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++) //colum
			{
				m3[i][j]=m1[i][j]+m2[i][j];
			}
		}
		printf("Sum of matrix :-");
		printf("\n");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++) //colum
			{
				textcolor(RED);
				cprintf(" %d ",m3[i][j]);
			}
			printf("\n");
		}
		getch();
}
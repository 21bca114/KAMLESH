#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],i,j;
	clrscr();
	//logic :input value into 2n Array
	for(i=0;i<3;i++)//logic for row
	{
		for(j=0;j<3;j++)//column//
		{
			printf("\n Enter value for a [%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	//logic : Print 2d Array
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		       //	printf("\n a[%d][%d]",i,j,a[i][j]);
		       printf("%d\t",a[i][j]);
		}
		printf("\t\n");
	}
	getch();
}
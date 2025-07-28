#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
clrscr();
for (i=0;i<=10;i++)
{
for (j=0;j<=i-1;j++)
{
printf("*");
}
printf("\n");
}
getch();
}
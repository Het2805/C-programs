#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k;
clrscr();
for (i=65;i<74;i++)
{
for (j=0;j<74-i;j++)
{
printf(" ");
}
for (k=65;k<=i;k++)
{
printf("%c",i);
}
printf("\n");
}
getch();
}
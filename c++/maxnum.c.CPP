#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c;
printf("\nEnter the value of A");
scanf("%d",&a);
printf("\nEnter the value of B");
scanf("%d",&b);
printf("\nEnter the value of C");
scanf("%d",&c);
 if (a>b)
 {
 if (a>c)
 {
 printf("\nA is max value");
 }
 else
 {
 printf("\nC is max value");
 }
 }
 else if (b>c)
 {
 printf("\nB is max value");
 }
 else
 {
 printf("\nC is max value");
 }


  getch();
}
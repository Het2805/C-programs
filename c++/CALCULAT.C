#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,ans,choice;
clrscr();
printf("\n Enter the value of A");
scanf("%d",&a);
printf("\n Enter the value of B");
scanf("%d",&b);
printf("\n1. multiplication");
printf("\n2. division");
printf("\n3. addition");
printf("\n4. subtraction");
printf("\n Enter the Choince");
scanf("%d",&choice);
switch(choice)
{
case 1:
ans=a*b;
printf("\nmultipication :%d ",ans);
break;
case 2:
ans=a/b;
printf("\n Division is %d",ans);
break;
case 3:
ans=a+b;
printf("\n Addition is %d",ans);
break;
case 4:
ans=a-b;
printf("\n Subtraction is %d",ans);
break;
default:
printf("\n Choice is invalid ");

}
getch();
}
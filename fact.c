#include<stdio.h>
#include<conio.h>
void main()
{
int f,i,n;
f=1;
clrscr();
printf("\n\t enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
f=f*i;
}
printf("\n\t factorial of %d is %d",n,f);
getch();
}

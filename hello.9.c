#include<stdio.h>
#include<conio.h>
void main()
{
int n,num,count=0,rem;
scanf("%d",&n);
while(n>0)
{
scanf("%d",&num);
while(num>0)
{
rem=num%10;
count++;
num=num/10;
}
printf("%d",count);
n--;
}
getch();
}

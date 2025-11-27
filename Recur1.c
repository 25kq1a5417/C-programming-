#include<stdio.h>
#include<conio.h>
void main ()
{
int n,result;
scanf("%d",&n);
result=fact(n);
printf("factorial is %d",result);
}
int fact(int n)
{
int f,i;
i=1;
while(i<=n)
{
f=f*i;
i++;
}
return f;
}

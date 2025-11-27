#include<stdio.h>
#include<conio.h>
void main ()
{
void add();
printf("hello");
printf("\n I am working with");
printf ("\n functions");
add();
printf("\n end of the program");
}
void add()
{
int a,b;
printf("\n Enter a and b values:\n");
scanf("%d%d",&a,&b);
printf("%d",(a+b));
}


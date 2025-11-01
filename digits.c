#include<stdio.h>
int main()
{
int a,b;
printf("Enter the number");
scanf("%d",&a);
int r=a%10;
b=b+r;
a=a/10;
r=a%10;
b=b+r;
a=a/10;
r=a%10;
b=b+r;
a=a/10;
printf("%d is the sum of numbers",b);
}

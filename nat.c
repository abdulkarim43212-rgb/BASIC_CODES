#include<stdio.h>
int main()
{
int i=1,b=0;
while(i<=10)
{
if(i%2==0)
{
printf("%d",i);
b=b+i;
}

i++;
}

printf("\n%d is the sum of the numbers",b);
}

#include<stdio.h>
int main()
{
int a,i=1,sum=0;
printf("Enter the value ");
scanf("%d",&a);
while(a>i)
{
if(a%i==0)
{
sum=sum+i;
}
i++;
}
if(sum==a)
{
printf("%d is a perfect number",a);
}
else
{
printf("%d is not a Perfect number ",a);
}
}

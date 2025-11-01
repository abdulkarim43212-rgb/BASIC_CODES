#include<stdio.h>
int main()
{
int num,i=1,count=0;
printf("Enter the value");
scanf("%d",&num);
while(num>=i)
{
if(num%i==0)
{
count++;
}
i++;
}
if(count==2)
{
printf("%d is a prime number",num);
}
else
{
printf("%d is not a prime number",num);
}
}

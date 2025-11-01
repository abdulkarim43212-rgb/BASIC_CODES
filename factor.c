#include<stdio.h>
int main()
{
int num,i=1,n;
printf("Enter the value");
scanf("%d",&num);
while(num>=i)
{
if(num%i==0)
{
n=num/i;
printf("the factors are %d\n",n);
}
i++;
}

}

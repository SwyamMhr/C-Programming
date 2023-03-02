#include<stdio.h>
#include<conio.h>

int main()
{
    int n,count,rem,sum=0,temp,f;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
	{
        rem=n%10;
        count=1;
        f=1;
        while(count<=rem)
		{
            f=f*count;
            count++;
        }
        sum=sum+f;
        n=n/10;
    }
    if(sum==temp)
	{
        printf("%d is a strong number.",temp);
    }
	else
	{
        printf("%d is not a strong number.",temp);
    }
}

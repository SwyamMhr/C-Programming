#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("Menu:\n");
	printf("1)Check perfect number\n");
    printf("2)Check ASCII character\n");
    printf("3)Sum of number\n");
    printf("Enter your choice: ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
    int num,i,sum=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(i=1;i<num;i++)
	{
        if(num%i==0)
		{
            sum+=i;
        }
    }
    if(sum==num)
        printf("Perfect number.");
	else
        printf("Not a Perfect number.");
    break;
    case 2:
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);
    printf("The ASCII code of %c is %d.",c,c);
    break;
    case 3:
    int a,b;
    printf("Enter any two numbers.\n");
    scanf("%d %d",&a,&b);
    printf("The sum of the numbers is %d.",a+b);
    break;
    default:
    printf("Invalid Choice.\n");
    break;
    }
    return 0;
}

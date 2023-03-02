#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,n;
	printf("Enter any two numbers.\n");
	scanf("%d %d",&a,&b);
	printf("Menu:\n1)Arithmetic Operators\n2)Relational Operator\n3)Logical Operator\n4)Bitwise Operator\n5)Assignment Operator\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
		printf("%d + %d = %d.\n",a+b);
		printf("%d - %d = %d.\n",a-b);
		printf("%d * %d = %d.\n",a*b);
		printf("%d / %d = %d.\n",a/b);
		break;
		case 2:
		printf("%d equal to %d = %d\n",a==b);
		printf("%d less than %d = %d\n",a<b);
		printf("%d greater than %d = %d\n",a>b);
		break;
		case 3:
		printf("%d > 10 and %d > 10 = %d\n",a,b,(a>10&&b>10));
		printf("%d > 10 or %d > 10 = %d\n",a,b,(a>10||b>10));
		printf("Not %d > %d = %d\n",a,b,!(a>b));
		break;
		case 4:
		printf("Bitwise %d AND %d = %d\n",a,b,a&b);
		printf("Bitwise %d OR %d = %d\n",a,b,a|b);
		printf("Bitwise %d XOR %d = %d\n",a,b,a^b);
		printf("Bitwise left shift of %d by 3 = %d\n",a,a<<3);
		printf("Bitwise right shift of %d by 3 = %d\n",b,b<<3);
		break;
		case 5:
		printf("%d += 5 gives %d\n",a,a+=5);
		printf("%d -= 5 gives %d\n",a,a-=5);
		printf("%d *= 5 gives %d\n",b,b+=5);
		printf("%d /= 5 gives %d\n",b,b/=5);
		break;
		default:
		printf("Invalid option.");
		break;
	}
	return 0;
}

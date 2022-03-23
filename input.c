#include <stdio.h>
int main()
{
	float num1,num2,sum,sub,multiply,divide;
	printf("\t\tGive input for num1 and num2 \n");
	scanf("%f",& num1);
	scanf("%f",& num2);
	sum=num1+num2;
	sub=num1-num2;
	multiply=num1*num2;
	divide=num1/num2;
	printf("Answer is %f \n",sum);
	printf("Answer is %f \n",sub);
	printf("Answer is %f \n",multiply);
	printf("Answer is %f \n",divide);
	return 0;
}


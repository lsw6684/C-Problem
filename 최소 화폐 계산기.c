#include <stdio.h>
int amount, cash, fiftyThousand = 0, tenThousand = 0, fiveThousand = 0, oneThousand = 0, fiveHundred = 0, oneHundred = 0, fifty = 0, ten = 0;

int counter()
{
	
	while(cash >= 50000)
	{
		cash -= 50000;
		fiftyThousand ++;
	}
	while(cash >= 10000)
	{
		cash -= 10000;
		tenThousand ++;
	}
	while(cash >= 5000)
	{
		cash -= 5000;
		fiveThousand ++;
	}
	while(cash >= 1000)
	{
		cash -= 1000;
		oneThousand ++;
	}
	while(cash >= 500)
	{
		cash -= 500;
		fiveHundred ++;
	}
	while(cash >= 100)
	{
		cash -= 100;
		oneHundred ++;
	}
	while(cash >= 50)
	{
		cash -= 50;
		fifty ++;
	}
	while(cash >= 10)
	{
		cash -= 10;
		ten ++;
	}
	if(fiftyThousand>0)
	{
		amount ++;
	}
	if(tenThousand>0)
	{
		amount ++;
	}
	if(fiveThousand>0)
	{
		amount ++;
	}
	if(oneThousand>0)
	{
		amount ++;
	}
	if(fiveHundred>0)
	{
		amount ++;
	}
	if(oneHundred>0)
	{
		amount ++;
	}
	if(fifty>0)
	{
		amount ++;
	}
	if(ten>0)
	{
		amount ++;
	}
	
}
int main(void)
{
	printf("�ݾ��� �Է��ϼ���\n");
	scanf("%d", &cash);
	counter();
	printf("�ּ� ȭ�� ����\n");
	printf("50000 	= %d��\n", fiftyThousand); 
	printf("10000 	= %d��\n", tenThousand); 
	printf("5000 	= %d��\n", fiveThousand); 
	printf("1000	= %d��\n", oneThousand); 
	printf("500 	= %d��\n", fiveHundred); 
	printf("100 	= %d��\n", oneHundred); 
	printf("50 	= %d��\n", fifty); 
	printf("10 	= %d��\n", ten);
	printf("�� %d ������ ȭ�� �ʿ��ϸ� �� ������ %d�� �Դϴ�.", amount,fiftyThousand + tenThousand + fiveThousand + oneThousand + fiveHundred + oneHundred + fifty + ten);
	
}

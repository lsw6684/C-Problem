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
	printf("금액을 입력하세요\n");
	scanf("%d", &cash);
	counter();
	printf("최소 화폐 단위\n");
	printf("50000 	= %d장\n", fiftyThousand); 
	printf("10000 	= %d장\n", tenThousand); 
	printf("5000 	= %d장\n", fiveThousand); 
	printf("1000	= %d장\n", oneThousand); 
	printf("500 	= %d장\n", fiveHundred); 
	printf("100 	= %d장\n", oneHundred); 
	printf("50 	= %d장\n", fifty); 
	printf("10 	= %d장\n", ten);
	printf("총 %d 종류의 화폐가 필요하며 총 갯수는 %d개 입니다.", amount,fiftyThousand + tenThousand + fiveThousand + oneThousand + fiveHundred + oneHundred + fifty + ten);
	
}

#include <stdio.h>
#define MONTHS 12

int main(void)
{
	//double
	double monthSalary = 1000.5;
	printf("$ %.2f\n", monthSalary * MONTHS);
	
	//char
	char x = 65;		//아스키코드 65 = A 
	printf("%c\n", x);	//선언을 int로 해도 출력이 char형태라서 자동으로 바뀜.
	char y = 'B';
	printf("%d\n", y);	//아스키코드 66 = B 
	
	int integer =100;
	printf("10진수로 출력 : %d\n", integer);
	printf("8진수로 출력 : %o\n", integer);
	printf("16진수로 출력 : %x\n", integer);  
	
	return 0;
}

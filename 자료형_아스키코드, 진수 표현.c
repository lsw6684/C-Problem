#include <stdio.h>
#define MONTHS 12

int main(void)
{
	//double
	double monthSalary = 1000.5;
	printf("$ %.2f\n", monthSalary * MONTHS);
	
	//char
	char x = 65;		//�ƽ�Ű�ڵ� 65 = A 
	printf("%c\n", x);	//������ int�� �ص� ����� char���¶� �ڵ����� �ٲ�.
	char y = 'B';
	printf("%d\n", y);	//�ƽ�Ű�ڵ� 66 = B 
	
	int integer =100;
	printf("10������ ��� : %d\n", integer);
	printf("8������ ��� : %o\n", integer);
	printf("16������ ��� : %x\n", integer);  
	
	return 0;
}

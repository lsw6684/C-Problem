#include <stdio.h>
#include <limits.h>
int main(void)
{
	int x;
	x = 5;
	printf("%d\n", x);
	printf("���� x�� �޸� ũ��� %d�Դϴ�.\n", sizeof(x));
	
	int x1 = 50;
	float y1 = 123456789.123456789;
	printf("x = %d\n", x1);
	printf("y = %.2f\n", y1);	//�Ǽ�, �Ҽ��� �� ��° �ڸ� ���� ���. float�� 4byte 
	
	double z = 123456789.123456789;
	printf("z = %.2f\n", z);	//8byte�� float�� ���� ���ϴ� �͵� ��� 
	
	int max = INT_MAX;
	printf("int���� �ִ� x�� %d�Դϴ�. \n", max);
	printf("max + 1�� %d \n", max + 1); //�����÷ο� 
	
	return 0;			//���� 
}

#include <stdio.h>

void swap(int *x, int *y)	//�� ������ ���� ���� ��ȯ�ϴ� ������ �Լ� 
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}


int main(void)
{
	int x, y;
	
	printf("�� ���� ���ڸ� �Է��ϼ���.\n");
	scanf("%d %d", &x, &y);
	printf("X = %d	Y = %d\n", x, y);

	swap(&x, &y);
	printf("SWAP!! \nX = %d Y = %d\n", x, y); 
	return 0;
}


#include <stdio.h>

//��� �Լ�(Recursive Function) 

void print(int count)
{
	if(count==0)
	{
		return;
	}
	else
	{
		printf("���ڿ��� ���.\n");
		print(count-1);
	}
}

int main(void)
{
	int number;
	printf("���ڿ��� ��� ��� �ұ��?\n");
	scanf("%d", &number);
	print(number);
}

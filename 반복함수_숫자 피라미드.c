#include <stdio.h>

//�ݺ��Լ� �̿� ���� �Ƕ�̵� ���. 
//���� FOR���� WHILE������ ����.  

int print(int a)
{
	int i, j;
	for(i=0; i<a; i++)
	{
		for(j=0; j<i; j++)
		{
			printf("%d ", j+1);
		}
		printf("\n");

	}
 } 

int main(void)
{
	int a; 
	printf("���ϴ� ������ �Է��ϼ���.\n");
	scanf("%d", &a);
	print(a+1);
	return 0;
}

#include<stdio.h>

int main(void)
{
	int i, j, k, l;
	printf("�簢���� ����, ���θ� ������� �Է��ϼ���.\n");
	scanf("%d %d", &i, &j);
	
	for(k = 0; k < j; k++)
	{
		for(l = 0; l < i; l++)
		{
			printf("��");
		}
		printf("\n");
	}
	return 0;
}

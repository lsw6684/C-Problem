#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *pi;	// Pointer Integer
	pi = (int *)malloc(sizeof(int));	//malloc = �޸𸮸� �Ҵ��ض�.
										//int���� 4byte�� �׳� malloc(4)�� ����. 
	if(pi == NULL)
	{
		printf("���� �޸� �Ҵ翡 ����.\n");
		exit(1);
	} 
	*pi = 100;
	printf("%d\n", *pi);
				//���� �޸� ��� ���� ������ �ش� �޸𸮸� ��ȯ.
	free(pi);	//�ý����� �������� ���̰� �޸� ȿ������ ���̱� ���� free�� ���� 
	return 0;
} 

#include <stdio.h>
#include <stdlib.h>
int main()
{
	char str[50];
	int idx = 0;
	printf("���ڿ� �Է� : ");
	scanf_s("%s", str, 50);		//�迭 &��������
	printf("�Էµ� ���ڿ� : %s\n", str);
	
	printf("���� ������ ��� : ");
	while (str[idx] !='\0')
	{
		printf("%c", str[idx]);
		idx++;
			 printf("\n");

	 } 
	 system("pause");

	 return 0;
}

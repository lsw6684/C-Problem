#include <stdio.h>
#include <string.h>

int main(void)
{
	char input[1000], result[2];
	gets(input);
	strcpy(result, input);
	printf("�Է��� ���ڿ��� �����Ͽ����ϴ�.\n : %s\n", result);
	return 0;
 } 

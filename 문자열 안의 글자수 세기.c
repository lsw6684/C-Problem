#include <stdio.h>

int main(void)
{
	
	char input[1001];
	printf("���̰� �ñ��� ���ڿ��� �Է��ϼ���.\n"); 
	gets(input);

	int count;
	while(input[count] != '\0' )
	{
		count ++;		
	} 
	printf("�Է��� ���ڿ��� ���̴� %d �Դϴ�.\n", count);
	return 0;	
}

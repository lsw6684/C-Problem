#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *pc = NULL;
	int i = 0;
	pc = (char *)malloc(100 * sizeof(char));
	if(pc == NULL)
	{
		printf("���� �޸� �Ҵ翡 �����߽��ϴ�.\n");
		exit(1);
	}
	// pc�� ����Ű�� �����͸� 1�� ������Ű�� ���ĺ� �ҹ��ڸ� �����մϴ�.
	for(i = 0; i < 26; i++)
	{
		*(pc + i) = 'a' + i;	//�ƽ�Ű�ڵ� a = 97, 98 = b... 
	} 
	*(pc + i) = 0;				//�ƽ�Ű�ڵ� 0 �� NULL�� �ǹ�.
	//�����Ͱ� NULL�� ����ġ�� ���ڿ��� ����� �ν�.
	
	printf("%s\n", pc);		//���ڿ� %s 
	free(pc);
	return 0;
}

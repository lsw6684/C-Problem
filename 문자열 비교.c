#include <stdio.h>
#include <string.h>

int main(void)
{
	int one, two;
	printf("ù ��° ���ڿ��� �Է��ϼ���.\n");
	char inputOne[1000];
	gets(inputOne);
	
	printf("�� ��° ���ڿ��� �Է��ϼ���.\n");
	char inputTwo[1000];
	gets(inputTwo);
	printf("���ڿ� �� : %d\n", strcmp(inputOne, inputTwo));
	//-1, ù ��° ���ڰ� �տ��ɴϴ�.
	//1, �� ��° ���ڰ� �տ��ɴϴ�.
	//0, ���� ���ڸ� �Է��Ͽ����ϴ�. 
	 
	 
	return 0;
}

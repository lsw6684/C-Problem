#include <stdio.h>

int main(void)
{
	char o;
	int x, y;
	while(1)
	{
		
		printf("������ �Է��ϼ��� : ");
		scanf("%d %c %d", &x, &o, &y);
		if(o == '+')
		{
			printf("%d %c %d = %d\n", x, o, y, x + y);
		}
		else if(o == '*')
		{
			printf("%d %c %d = %d\n", x, o, y, x * y);
		}
		else if(o == '/')
		{
			printf("%d %c %d = %d\n", x, o, y, x / y);
		}
		else if(o == '-')
		{
			printf("%d %c %d = %d\n", x, o, y, x - y);
		}
		else if(o == '%')
		{
			printf("%d %c %d = %d\n", x, o, y, x % y);
		}
		else
		{
			printf("�߸��� �Է��Դϴ�.\n");
		}
		getchar();
		printf("���α׷��� �����Ͻʴϱ�? (Y/N)\n");
		scanf("%c", &o);
		if(o=='y'||o=='Y')
		{
			printf("���α׷��� �����մϴ�.");
			break;
		}
		else if(o=='n'||o=='N')
		{
			continue;
		}
		else
		{
			printf("�ٽ� �Է��ϼ���.");
		}	
	}
	return 0;
}

#include <stdio.h>

int main(void)
{
	char o;
	int x, y;
	while(1)
	{
		
		printf("수식을 입력하세요 : ");
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
			printf("잘못된 입력입니다.\n");
		}
		getchar();
		printf("프로그램을 종료하십니까? (Y/N)\n");
		scanf("%c", &o);
		if(o=='y'||o=='Y')
		{
			printf("프로그램을 종료합니다.");
			break;
		}
		else if(o=='n'||o=='N')
		{
			continue;
		}
		else
		{
			printf("다시 입력하세요.");
		}	
	}
	return 0;

}

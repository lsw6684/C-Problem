#include <stdio.h>

//���� ����
int day, hour, minute, minuteAdd; 

void counter()
{
	minute += minuteAdd;
	hour += minute/60;
	minute %= 60;
	day = hour/24;
	hour %= 24;
}
int main(void)
{
	printf("Hour�� Minute�� ���ʷ� �Է��ϼ���.\n");
	scanf("%d %d", &hour, &minute);
	printf("���� Minute�� �Է��ϼ���\n");
	scanf("%d", &minuteAdd);
	counter();
	
	printf("��� : %d�� %d�� %d���Դϴ�.\n", day, hour, minute);
	return 0;
}


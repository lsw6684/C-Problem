#include <stdio.h>
#define SECONDE_FER_MINUTE 60
int main()
{
	int i, hour;
	scanf("%d",&i);
	int minute = i/SECONDE_FER_MINUTE;
	int second = i%SECONDE_FER_MINUTE;
	if(minute>=SECONDE_FER_MINUTE)
	{
		hour = hour + minute / SECONDE_FER_MINUTE;
		minute -= hour*SECONDE_FER_MINUTE;
	}
	
	printf("�Էµ� �ʴ� %d�ð� %d�� %d�� �Դϴ�.\n", hour, minute, second);
}

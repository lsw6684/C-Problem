#include <stdio.h>
#define SECONDE_FER_MINUTE 60
int main()
{
	int i, hour;
	printf("초를 입력하면 시간으로 바꿔줍니다.\n");
	scanf("%d",&i);
	int minute = i/SECONDE_FER_MINUTE;
	int second = i%SECONDE_FER_MINUTE;
	if(minute>=SECONDE_FER_MINUTE)
	{
		hour = hour + minute / SECONDE_FER_MINUTE;
		minute -= hour*SECONDE_FER_MINUTE;
	}
	
	printf("입력된 초는 %d시간 %d분 %d초 입니다.\n", hour, minute, second);
}

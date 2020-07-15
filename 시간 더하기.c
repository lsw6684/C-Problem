#include <stdio.h>

//전역 변수
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
	printf("Hour와 Minute을 차례로 입력하세요.\n");
	scanf("%d %d", &hour, &minute);
	printf("더할 Minute을 입력하세요\n");
	scanf("%d", &minuteAdd);
	counter();
	
	printf("결과 : %d일 %d시 %d분입니다.\n", day, hour, minute);
	return 0;
}


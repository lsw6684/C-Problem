#include <stdio.h>

//윤년 : 400년 단위는 예외로 두고, 100년 단위를 제외한 4년단위를 윤년으로 칭함.
//윤년은 전 세계적인 공통 규칙이며 2월이 29일까지 존재 


int main(void)
{
	int year; 
	printf("윤년인지 궁금한 해(년도)를 입력하세요. : \n");
	scanf("%d", &year);
	
	if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		printf("%d년은 윤년입니다.", year);
	}
	else
	{
		printf("%d년은 윤년이 아닙니다.", year);
	}
	return 0;
}

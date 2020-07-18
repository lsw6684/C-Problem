#include <stdio.h>

void swap(int *x, int *y)	//두 변수의 값을 서로 변환하는 포인터 함수 
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}


int main(void)
{
	int x, y;
	
	printf("두 가지 숫자를 입력하세요.\n");
	scanf("%d %d", &x, &y);
	printf("X = %d	Y = %d\n", x, y);

	swap(&x, &y);
	printf("SWAP!! \nX = %d Y = %d\n", x, y); 
	return 0;
}


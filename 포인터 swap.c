#include <stdio.h>

void swap(int *x, int *y)	//두 변수의 값을 서로 변환하는 포인터 함수 
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}	//매개변수로 이루어진 값들은 함수 내에서만 처리되기 때문에
	//이 경우에서 포인터를 사용하지 않으면 원하는 대로 실행이 안된다. 

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


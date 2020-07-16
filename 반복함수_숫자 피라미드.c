#include <stdio.h>

//반복함수 이용 숫자 피라미드 출력. 
//오직 FOR문과 WHILE문으로 구성.  

int print(int a)
{
	int i, j;
	for(i=0; i<a; i++)
	{
		for(j=0; j<i; j++)
		{
			printf("%d ", j+1);
		}
		printf("\n");

	}
 } 

int main(void)
{
	int a; 
	printf("원하는 층수를 입력하세요.\n");
	scanf("%d", &a);
	print(a+1);
	return 0;
}

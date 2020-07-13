#include<stdio.h>

int main(void)
{
	int i, j, k, l;
	printf("사각형의 가로, 세로를 순서대로 입력하세요.\n");
	scanf("%d %d", &i, &j);
	
	for(k = 0; k < j; k++)
	{
		for(l = 0; l < i; l++)
		{
			printf("■");
		}
		printf("\n");
	}
	return 0;
}

#include <stdio.h>

int main(void)
{
	int i, j, stair;
	back:
	printf("피라미드의 층수를 입려하세요.(max = 20)\n");
	scanf("%d", &stair);
	if(stair > 20)
	{
		printf("20이 최대라고! 다시 입력해.\n");
		goto back;
	}
	if(stair <= 0)
	{
		printf("장난해?\n");
		goto back;
	}
	
	stair += 1;
	for(i=0; i<stair; i++)
	{
		for(j=stair-i-1; j>0; j-- )
		{
			printf("  ");
		}
		for(j=0; j<i; j++)
		{
			printf("■");
		}
		for(j=0; j<i-1; j++)
		{
			printf("■");
		}
		printf("\n"); 
	}
	
}

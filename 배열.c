#include <stdio.h>
#include <limits.h>	//int형의 최대 최소 값 보관. 
#define NUMBER 5


int main(void)
{
	int i, j, max, min = INT_MAX, index, index2;
	int array[NUMBER];	
	back:
	for(i=0; i<NUMBER; i++)
	{
	 
		printf("5개의 값을 입력하세요 : ");		
		scanf("%d", &array[i]);
	
		if(max < array[i])
		{
			max = array[i];
			index = i;
		}
		if(min > array[i])
		{
			min = array[i];
			index2 = i;
		} 
	}
	
	printf("가장 큰 값은 %d번째 있는 %d 입니다.\n", index + 1, max); 
	printf("가장 작은 값은 %d번째 있는 %d 입니다.\n", index2 + 1, min); 


} 
